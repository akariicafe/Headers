@class NSString, LTSchemaTask, NSData;

@interface LTSchemaSafariFeedbackEvent : PBCodable

@property (retain, nonatomic) LTSchemaTask *task;
@property (nonatomic) BOOL hasTask;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) BOOL hasSessionID;
@property (copy, nonatomic) NSString *userFeedbackContentSource;
@property (nonatomic) BOOL hasUserFeedbackContentSource;
@property (copy, nonatomic) NSString *userFeedbackContentTarget;
@property (nonatomic) BOOL hasUserFeedbackContentTarget;
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
