@interface WFActionDrawerImageLoadTask : NSObject

@property (readonly, nonatomic, getter=isCanceled) BOOL canceled;

- (void)cancel;

@end
