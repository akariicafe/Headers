@class QSSCancelRequest, QSSFinishAudio, QSSAudioPacket, QSSStartPronGuessRequest;

@interface QSSMutablePronGuessStreamingRequest : QSSPronGuessStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSStartPronGuessRequest *contentAsQSSStartPronGuessRequest;
@property (copy, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (copy, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (copy, nonatomic) QSSCancelRequest *contentAsQSSCancelRequest;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
