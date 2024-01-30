@class NSObject;
@protocol OS_dispatch_queue;

@interface IMDDController : NSObject {
    NSObject<OS_dispatch_queue> *_scannerQueue;
}

+ (id)sharedInstance;

- (void)scanMessage:(id)a0 waitUntilDone:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)scanMessage:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)_scanAttributedStringWithMessage:(id)a0 attributedString:(id)a1 plainText:(id)a2;
- (void)_processLinkInAttributedString:(id)a0;
- (BOOL)_scanMessageUsingScanner:(id)a0 attributedString:(id)a1;
- (struct __DDScanner { } *)sharedScanner;
- (id)scannerQueue;

@end
