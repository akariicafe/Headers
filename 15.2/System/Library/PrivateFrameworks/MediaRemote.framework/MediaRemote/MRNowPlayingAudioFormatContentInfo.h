@class NSString, NSData, NSNumber, _MRMRNowPlayingAudioFormatContentInfoProtobuf;

@interface MRNowPlayingAudioFormatContentInfo : NSObject

@property (readonly, nonatomic) NSNumber *audioSessionID;
@property (readonly, nonatomic) NSNumber *audioFormat;
@property (readonly, nonatomic) NSNumber *channelCount;
@property (readonly, nonatomic) NSString *bestAvailableContent;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) _MRMRNowPlayingAudioFormatContentInfoProtobuf *protobuf;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *audioFormatDescription;
@property (readonly, copy, nonatomic) NSString *bestAvailableAudioFormatDescription;
@property (readonly, nonatomic) long long bestAvailableAudioFormat;
@property (readonly, nonatomic, getter=isMultichannel) BOOL multichannel;
@property (readonly, nonatomic, getter=isEligibleForSpatialization) BOOL eligibleForSpatialization;
@property (readonly, nonatomic, getter=isSpatialized) BOOL spatialized;

- (id)initWithProtobuf:(id)a0;
- (id)initWithBundleID:(id)a0 audioSessionID:(id)a1 audioFormat:(id)a2 channelCount:(id)a3 bestAvailableContent:(id)a4 isEligibleForSpatialization:(id)a5 isSpatialized:(id)a6;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
