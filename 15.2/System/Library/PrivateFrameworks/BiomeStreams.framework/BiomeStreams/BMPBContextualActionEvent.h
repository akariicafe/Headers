@class NSString, NSMutableArray;

@interface BMPBContextualActionEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasAppName;
@property (retain, nonatomic) NSString *appName;
@property (readonly, nonatomic) BOOL hasActionName;
@property (retain, nonatomic) NSString *actionName;
@property (retain, nonatomic) NSMutableArray *contents;
@property (retain, nonatomic) NSMutableArray *parameters;

+ (Class)contentType;
+ (Class)parameterType;

- (void)addContent:(id)a0;
- (unsigned long long)contentsCount;
- (id)contentAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)parametersCount;
- (void)clearParameters;
- (unsigned long long)hash;
- (void)clearContents;
- (id)dictionaryRepresentation;
- (void)addParameter:(id)a0;
- (id)parameterAtIndex:(unsigned long long)a0;

@end
