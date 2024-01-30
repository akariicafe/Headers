@class AVVCDuckOverride, AVVCDuckFadeDuration;

@interface AVVCDuckSettings : NSObject

@property (retain, nonatomic) AVVCDuckOverride *duckOverride;
@property (retain, nonatomic) AVVCDuckFadeDuration *fadeDuration;

- (id)description;
- (id)init;
- (void)dealloc;

@end
