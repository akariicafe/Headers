@interface WK_RTCVideoEncoderQpThresholds : NSObject

@property (readonly, nonatomic) long long low;
@property (readonly, nonatomic) long long high;

- (id)initWithThresholdsLow:(long long)a0 high:(long long)a1;

@end
