@class NSString;

@interface AMSMonitoredAccountStoreProxy : NSProxy

@property (copy, nonatomic) NSString *mediaType;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithMediaType:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
