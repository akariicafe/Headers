@class NSString, NSOperation;
@protocol LSOpenResourceOperationDelegate;

@interface _LSOpenResourceOperationDelegateWrapper : NSObject <LSOpenResourceOperationDelegate> {
    NSOperation *_operation;
    id<LSOpenResourceOperationDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 wrappedDelegate:(id)a1;
- (void)openResourceOperation:(id)a0 didFailWithError:(id)a1;
- (void)openResourceOperation:(id)a0 didFinishCopyingResource:(id)a1;
- (void)openResourceOperationDidComplete:(id)a0;

@end
