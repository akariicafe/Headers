@class NSURL, NSError;

@interface AMSURLSentry : NSObject {
    void /* unknown type, empty encoding */ bag;
}

- (id)init;
- (id)initWithBag:(id)a0;
- (void).cxx_destruct;
- (void)isTrustedURL:(NSURL *)a0 completionHandler:(void (^)(BOOL, NSError *))a1;

@end
