@class NSString, NETSchemaNETError, NSData;

@interface NETSchemaNETSessionConnectionFailed : SISchemaInstrumentationMessage {
    struct { unsigned char connectionType : 1; unsigned char connectionMode : 1; unsigned char sessionType : 1; unsigned char networkSessionState : 1; unsigned char isWwanPreferred : 1; unsigned char isDormant : 1; unsigned char sendBufferSize : 1; } _has;
}

@property (nonatomic) int connectionType;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) int connectionMode;
@property (nonatomic) BOOL hasConnectionMode;
@property (nonatomic) int sessionType;
@property (nonatomic) BOOL hasSessionType;
@property (nonatomic) int networkSessionState;
@property (nonatomic) BOOL hasNetworkSessionState;
@property (nonatomic) BOOL isWwanPreferred;
@property (nonatomic) BOOL hasIsWwanPreferred;
@property (nonatomic) BOOL isDormant;
@property (nonatomic) BOOL hasIsDormant;
@property (nonatomic) unsigned long long sendBufferSize;
@property (nonatomic) BOOL hasSendBufferSize;
@property (copy, nonatomic) NSString *policyId;
@property (nonatomic) BOOL hasPolicyId;
@property (retain, nonatomic) NETSchemaNETError *error;
@property (nonatomic) BOOL hasError;
@property (retain, nonatomic) NETSchemaNETError *underlyingError;
@property (nonatomic) BOOL hasUnderlyingError;
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
