@interface CAMCaptureCallbackReceipt : NSObject

@property (readonly, nonatomic) long long callback;
@property (readonly, nonatomic) double secondsSinceBegin;

- (id)initWithCallback:(long long)a0 duration:(double)a1;

@end
