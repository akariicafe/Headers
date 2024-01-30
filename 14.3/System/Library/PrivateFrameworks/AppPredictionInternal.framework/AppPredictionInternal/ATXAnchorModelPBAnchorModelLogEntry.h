@class NSString, NSMutableArray, ATXAnchorModelPBAnchorMetadata;

@interface ATXAnchorModelPBAnchorModelLogEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) BOOL hasAnchor;
@property (retain, nonatomic) ATXAnchorModelPBAnchorMetadata *anchor;
@property (retain, nonatomic) NSMutableArray *positiveAppLaunches;
@property (retain, nonatomic) NSMutableArray *positiveActions;
@property (retain, nonatomic) NSMutableArray *negativeAppLaunches;
@property (retain, nonatomic) NSMutableArray *negativeActions;

+ (Class)positiveAppLaunchesType;
+ (Class)positiveActionsType;
+ (Class)negativeAppLaunchesType;
+ (Class)negativeActionsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addPositiveAppLaunches:(id)a0;
- (void)addPositiveActions:(id)a0;
- (void)addNegativeAppLaunches:(id)a0;
- (void)addNegativeActions:(id)a0;
- (unsigned long long)positiveAppLaunchesCount;
- (void)clearPositiveAppLaunches;
- (id)positiveAppLaunchesAtIndex:(unsigned long long)a0;
- (unsigned long long)positiveActionsCount;
- (void)clearPositiveActions;
- (id)positiveActionsAtIndex:(unsigned long long)a0;
- (unsigned long long)negativeAppLaunchesCount;
- (void)clearNegativeAppLaunches;
- (id)negativeAppLaunchesAtIndex:(unsigned long long)a0;
- (unsigned long long)negativeActionsCount;
- (void)clearNegativeActions;
- (id)negativeActionsAtIndex:(unsigned long long)a0;

@end
