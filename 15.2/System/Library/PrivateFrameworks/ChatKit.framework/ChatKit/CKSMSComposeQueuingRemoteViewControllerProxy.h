@class NSMutableArray;
@protocol CKSMSCompose;

@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject

@property (retain, nonatomic) NSMutableArray *queuedInvocations;
@property (retain, nonatomic) id<CKSMSCompose> serviceViewControllerProxy;

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;

@end
