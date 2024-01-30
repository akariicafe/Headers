@class NSObject;
@protocol OS_dispatch_queue;

@interface IMDDController : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scannerQueue;

+ (id)sharedInstance;
+ (id)allSupportedDDAttributesKeys;

- (id)init;
- (void).cxx_destruct;
- (void)scanMessage:(id)a0 outgoing:(BOOL)a1 waitUntilDone:(BOOL)a2 completionBlock:(id /* block */)a3;
- (void)_processLinkInAttributedString:(id)a0;
- (BOOL)_scanAttributedStringWithMessage:(id)a0 attributedString:(id)a1 plainText:(id)a2;
- (BOOL)_scanMessageUsingScanner:(id)a0 attributedString:(id)a1;
- (void)scanMessage:(id)a0 completionBlock:(id /* block */)a1;
- (struct __DDScanner { } *)sharedScanner;

@end
