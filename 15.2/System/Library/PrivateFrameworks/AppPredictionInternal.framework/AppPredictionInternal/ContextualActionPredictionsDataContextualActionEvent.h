@class NSString, NSMutableArray, ContextualActionPredictionsDataContextFeatures;

@interface ContextualActionPredictionsDataContextualActionEvent : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *sourceAppBundleID;
@property (retain, nonatomic) NSString *actionIdentifier;
@property (retain, nonatomic) NSString *actionName;
@property (retain, nonatomic) NSMutableArray *commonFileFeatures;
@property (retain, nonatomic) NSMutableArray *photoFeatures;
@property (readonly, nonatomic) BOOL hasContextFeatures;
@property (retain, nonatomic) ContextualActionPredictionsDataContextFeatures *contextFeatures;
@property (retain, nonatomic) NSMutableArray *previousActionIdentifiers;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (retain, nonatomic) NSString *sessionId;

+ (Class)commonFileFeaturesType;
+ (Class)photoFeaturesType;
+ (Class)previousActionIdentifiersType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addCommonFileFeatures:(id)a0;
- (void)addPhotoFeatures:(id)a0;
- (void)addPreviousActionIdentifiers:(id)a0;
- (unsigned long long)commonFileFeaturesCount;
- (void)clearCommonFileFeatures;
- (id)commonFileFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)photoFeaturesCount;
- (void)clearPhotoFeatures;
- (id)photoFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)previousActionIdentifiersCount;
- (void)clearPreviousActionIdentifiers;
- (id)previousActionIdentifiersAtIndex:(unsigned long long)a0;

@end
