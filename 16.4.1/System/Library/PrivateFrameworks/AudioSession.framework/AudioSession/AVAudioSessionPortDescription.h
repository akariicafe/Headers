@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) NSString *portName;
@property (readonly, nonatomic) NSString *UID;
@property (readonly) BOOL hasHardwareVoiceCallProcessing;
@property (readonly, getter=isSpatialAudioEnabled) BOOL spatialAudioEnabled;
@property (readonly, nonatomic) NSArray *channels;
@property (readonly, nonatomic) NSArray *dataSources;
@property (readonly, nonatomic) AVAudioSessionDataSourceDescription *selectedDataSource;
@property (readonly, nonatomic) AVAudioSessionDataSourceDescription *preferredDataSource;

+ (id)privateCreateArray:(id)a0 owningSession:(id)a1;

- (struct PortDescriptionImpl { id x0; id x1; id x2; id x3; id x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; long long x10; unsigned long long x11; id x12; id x13; id x14; id x15; } *)privateGetImplementation;
- (id)privateGetID;
- (BOOL)setPreferredDataSource:(id)a0 error:(id *)a1;
- (BOOL)isHeadphones;
- (long long)portSubType;
- (BOOL)isEqualToPort:(id)a0 compareStrict:(BOOL)a1;
- (void)dealloc;
- (id)initWithRawPortDescription:(id)a0 owningSession:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)configureChannelsAndDataSources:(id)a0;
- (unsigned long long)hash;
- (id)initWithRawPortDescriptionXPC:(id)a0 owningSession:(id)a1;
- (BOOL)isLiveListenSupported;
- (id)description;
- (void)setSupportsSpatialAudio:(BOOL)a0;
- (BOOL)isLowLatencyAirPlay;
- (unsigned long long)endpointType;

@end
