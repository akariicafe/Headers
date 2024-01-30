@class NSString, NSData, SISchemaViewContainer;

@interface SISchemaPunchOut : SISchemaInstrumentationMessage {
    struct { unsigned char punchOutUI : 1; } _has;
}

@property (copy, nonatomic) NSString *appID;
@property (nonatomic) BOOL hasAppID;
@property (copy, nonatomic) NSString *urlScheme;
@property (nonatomic) BOOL hasUrlScheme;
@property (retain, nonatomic) SISchemaViewContainer *viewContainer;
@property (nonatomic) BOOL hasViewContainer;
@property (copy, nonatomic) NSData *viewElementID;
@property (nonatomic) BOOL hasViewElementID;
@property (nonatomic) int punchOutUI;
@property (nonatomic) BOOL hasPunchOutUI;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
