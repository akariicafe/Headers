@class NSString;

@interface WK_RTCMutableI420Buffer : WK_RTCI420Buffer <RTCMutableI420Buffer>

@property (readonly, nonatomic) int chromaWidth;
@property (readonly, nonatomic) int chromaHeight;
@property (readonly, nonatomic) const char *dataY;
@property (readonly, nonatomic) const char *dataU;
@property (readonly, nonatomic) const char *dataV;
@property (readonly, nonatomic) int strideY;
@property (readonly, nonatomic) int strideU;
@property (readonly, nonatomic) int strideV;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char *mutableDataY;
@property (readonly, nonatomic) char *mutableDataU;
@property (readonly, nonatomic) char *mutableDataV;


@end
