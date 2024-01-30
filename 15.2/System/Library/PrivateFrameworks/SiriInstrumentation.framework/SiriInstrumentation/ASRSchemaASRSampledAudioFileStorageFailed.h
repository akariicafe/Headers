@class NSString, NSData;

@interface ASRSchemaASRSampledAudioFileStorageFailed : SISchemaInstrumentationMessage {
    struct { unsigned char errorCode : 1; unsigned char underlyingErrorCode : 1; unsigned char sampledAudioStorageFailureReason : 1; } _has;
}

@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (copy, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorDomain;
@property (nonatomic) int underlyingErrorCode;
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (copy, nonatomic) NSString *underlyingErrorDomain;
@property (nonatomic) BOOL hasUnderlyingErrorDomain;
@property (nonatomic) int sampledAudioStorageFailureReason;
@property (nonatomic) BOOL hasSampledAudioStorageFailureReason;
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
