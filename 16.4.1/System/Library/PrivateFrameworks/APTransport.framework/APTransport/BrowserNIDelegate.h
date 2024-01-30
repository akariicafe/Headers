@class NSString;

@interface BrowserNIDelegate : NSObject <NISessionDelegate> {
    struct OpaqueFigCFWeakReferenceHolder { } *_browserWeak;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)session:(id)a0 didInvalidateWithError:(id)a1;
- (void)session:(id)a0 didUpdateNearbyObjects:(id)a1;
- (void)session:(id)a0 didRemoveNearbyObjects:(id)a1 withReason:(long long)a2;
- (id)initWithBrowser:(struct OpaqueAPBrowser { } *)a0;

@end
