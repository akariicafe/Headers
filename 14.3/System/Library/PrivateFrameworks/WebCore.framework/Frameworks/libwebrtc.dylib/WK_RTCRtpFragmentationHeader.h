@class NSArray;

@interface WK_RTCRtpFragmentationHeader : NSObject

@property (retain, nonatomic) NSArray *fragmentationOffset;
@property (retain, nonatomic) NSArray *fragmentationLength;
@property (retain, nonatomic) NSArray *fragmentationTimeDiff;
@property (retain, nonatomic) NSArray *fragmentationPlType;

- (void).cxx_destruct;
- (struct unique_ptr<webrtc::RTPFragmentationHeader, std::__1::default_delete<webrtc::RTPFragmentationHeader> > { struct __compressed_pair<webrtc::RTPFragmentationHeader *, std::__1::default_delete<webrtc::RTPFragmentationHeader> > { struct RTPFragmentationHeader *x0; } x0; })createNativeFragmentationHeader;
- (id)initWithNativeFragmentationHeader:(const struct RTPFragmentationHeader { unsigned short x0; unsigned long long *x1; unsigned long long *x2; } *)a0;

@end
