@class NSString;

@interface MPRadioStationRemotePlaybackQueue : MPRemotePlaybackQueue

@property (readonly, nonatomic) long long stationID;
@property (readonly, nonatomic) NSString *stationStringID;

+ (BOOL)supportsSecureCoding;

- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { } *)a0 options:(id)a1;
- (BOOL)verifyWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;

@end
