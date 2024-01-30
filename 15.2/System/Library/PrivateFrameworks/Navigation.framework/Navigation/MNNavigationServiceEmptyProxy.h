@class MNNavigationServicePeer;

@interface MNNavigationServiceEmptyProxy : NSObject {
    MNNavigationServicePeer *_peer;
}

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithPeer:(id)a0;
- (BOOL)_isSelectorValidForForwarding:(SEL)a0;

@end
