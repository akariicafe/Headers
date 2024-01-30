@class NSMutableArray;
@protocol CKSMSCompose;

@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject

@property (retain, nonatomic) NSMutableArray *queuedInvocations;
@property (retain, nonatomic) id<CKSMSCompose> serviceViewControllerProxy;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
