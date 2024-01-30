@class NSNumber;

@interface AVVCDuckFadeDuration : NSObject

@property (retain, nonatomic) NSNumber *fadeIn;
@property (retain, nonatomic) NSNumber *fadeOut;

- (id)description;
- (void)dealloc;
- (id)initWithFadeIn:(id)a0 fadeOut:(id)a1;

@end
