@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) NSString *portName;
@property (readonly, nonatomic) NSString *UID;
@property (readonly) BOOL hasHardwareVoiceCallProcessing;
@property (readonly, nonatomic) NSArray *channels;
@property (readonly, nonatomic) NSArray *dataSources;
@property (readonly, nonatomic) AVAudioSessionDataSourceDescription *selectedDataSource;
@property (readonly, nonatomic) AVAudioSessionDataSourceDescription *preferredDataSource;

+ (id)privateCreateArray:(id)a0 owningSession:(id)a1;

- (id)initWithSession:(id)a0;
- (unsigned long long)endpointType;
- (BOOL)setPreferredDataSource:(id)a0 error:(id *)a1;
- (BOOL)isLiveListenSupported;
- (id)privateGetID;
- (void)dealloc;
- (unsigned long long)hash;
- (void)configureChannelsAndDataSources:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isHeadphones;
- (BOOL)isEqualToPort:(id)a0 compareStrict:(BOOL)a1;
- (struct PortDescriptionImpl { id x0; id x1; id x2; id x3; id x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned long long x9; id x10; id x11; id x12; id x13; } *)privateGetImplementation;
- (BOOL)isLowLatencyAirPlay;
- (id)initWithRawPortDescription:(id)a0 owningSession:(id)a1;

@end
