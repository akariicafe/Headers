@class NSString, NSData, SISchemaViewContainer;

@interface SISchemaPunchOut : PBCodable

@property (copy, nonatomic) NSString *appID;
@property (nonatomic) BOOL hasAppID;
@property (copy, nonatomic) NSString *urlScheme;
@property (nonatomic) BOOL hasUrlScheme;
@property (retain, nonatomic) SISchemaViewContainer *viewContainer;
@property (nonatomic) BOOL hasViewContainer;
@property (copy, nonatomic) NSData *viewElementID;
@property (nonatomic) BOOL hasViewElementID;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
