@class NSMutableArray, VCMediaNegotiationBlobV2SettingsU1;

@interface VCMediaNegotiationBlobV2StreamGroup : PBCodable <NSCopying> {
    struct { unsigned char streamGroup : 1; } _has;
}

@property (nonatomic) BOOL hasStreamGroup;
@property (nonatomic) unsigned int streamGroup;
@property (retain, nonatomic) NSMutableArray *payloads;
@property (retain, nonatomic) NSMutableArray *streams;
@property (readonly, nonatomic) BOOL hasSettingsU1;
@property (retain, nonatomic) VCMediaNegotiationBlobV2SettingsU1 *settingsU1;

+ (id)negotiationCipherSuiteAsString:(unsigned int)a0;
+ (id)defaultsForStreamGroup:(unsigned int)a0;
+ (id)defaultsForStreamGroupCustom:(unsigned int)a0;
+ (BOOL)isValidStreamGroupIDFromConfig:(id)a0 defaultConfig:(id)a1;
+ (Class)payloadsType;
+ (unsigned int)streamGroupFromStreamGroupID:(unsigned int)a0;
+ (unsigned int)streamGroupIDFromStreamGroup:(unsigned int)a0;
+ (Class)streamsType;
+ (void)updateParentStreamIDForGroupConfig:(id)a0;

- (void)clearStreams;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)streamsAtIndex:(unsigned long long)a0;
- (void)addPayloads:(id)a0;
- (void)addStreams:(id)a0;
- (BOOL)appendStreamsToStreamGroupConfig:(id)a0 streamGroupID:(unsigned int)a1 rtpSampleRates:(id)a2;
- (void)clearPayloads;
- (id)customPayloadConfigStateWithStreamGroupConfig:(id)a0;
- (int)getStreamGroupConfig:(id *)a0;
- (id)initWithStreamGroupConfig:(id)a0;
- (id)initWithStreamGroupConfig:(id)a0 defaultConfig:(id)a1;
- (BOOL)isDefaultPayloadConfigsWithStreamGroupConfig:(id)a0;
- (BOOL)isUsedPayloadConfigAtIndex:(id)a0 streamGroupConfig:(id)a1 rtpTimestampRate:(unsigned int *)a2;
- (id)payloadsAtIndex:(unsigned long long)a0;
- (unsigned long long)payloadsCount;
- (void)printWithLogFile:(void *)a0 prefix:(id)a1;
- (BOOL)setupPayloadsWithGroupConfig:(id)a0;
- (BOOL)setupStreamsWithGroupConfig:(id)a0;
- (unsigned long long)streamsCount;
- (void)updateDefaultPayloadConfigsWithConfig:(id)a0 rtpSampleRates:(id)a1;
- (BOOL)updatePayloadConfigsWithStreamGroupConfig:(id)a0 rtpSampleRates:(id)a1;

@end
