@class NSString;

@interface WKRBSAssertionDelegate : NSObject <RBSAssertionObserving>

@property (copy) id /* block */ prepareForInvalidationCallback;
@property (copy) id /* block */ invalidationCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assertion:(id)a0 didInvalidateWithError:(id)a1;
- (void)assertionWillInvalidate:(id)a0;
- (void)dealloc;

@end
