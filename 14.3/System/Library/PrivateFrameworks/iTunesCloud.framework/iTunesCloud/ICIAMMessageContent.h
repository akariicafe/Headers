@class NSString, NSMutableArray, ICIAMMetricEvent;

@interface ICIAMMessageContent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL hasBody;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSMutableArray *images;
@property (retain, nonatomic) NSMutableArray *messageActions;
@property (retain, nonatomic) NSMutableArray *contentParameters;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasPageEvent;
@property (retain, nonatomic) ICIAMMetricEvent *pageEvent;
@property (readonly, nonatomic) BOOL hasCloseClickEvent;
@property (retain, nonatomic) ICIAMMetricEvent *closeClickEvent;
@property (readonly, nonatomic) BOOL hasCardClickEvent;
@property (retain, nonatomic) ICIAMMetricEvent *cardClickEvent;

+ (Class)messageActionsType;
+ (Class)contentParametersType;
+ (Class)imagesType;

- (void)clearImages;
- (void).cxx_destruct;
- (void)addMessageActions:(id)a0;
- (void)addContentParameters:(id)a0;
- (unsigned long long)messageActionsCount;
- (void)clearMessageActions;
- (id)messageActionsAtIndex:(unsigned long long)a0;
- (unsigned long long)contentParametersCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearContentParameters;
- (id)contentParametersAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)imagesCount;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addImages:(id)a0;
- (id)imagesAtIndex:(unsigned long long)a0;

@end
