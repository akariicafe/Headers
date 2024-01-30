@interface ASCLockupProductDetailsPresentationContext : NSObject

@property (class, readonly) ASCLockupProductDetailsPresentationContext *defaultPresentationContext;

@property (readonly, nonatomic) long long presentationStyle;

- (id)initWithPresentationStyle:(long long)a0;

@end
