@class NSArray;

@interface WBSTabDialogInformation : NSObject {
    id /* block */ _dismissalBlock;
    BOOL _isInvokingPresentationBlock;
    id /* block */ _presentationBlock;
}

@property (nonatomic) struct { int webProcessID; unsigned long long tabID; } slot;
@property (copy, nonatomic) NSArray *cancellationExemptions;
@property (readonly, nonatomic, getter=isBlockingWebProcess) BOOL blockingWebProcess;
@property (readonly, nonatomic, getter=isDismissed) BOOL dismissed;
@property (readonly, nonatomic, getter=isPresented) BOOL presented;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPresentationBlock:(id /* block */)a0 dismissalBlock:(id /* block */)a1 blocksWebProcessUntilDismissed:(BOOL)a2;
- (void)presentIfNeeded;
- (void)dismissWithResponse:(id)a0;
- (BOOL)isExemptFromCancellationInContext:(id)a0;

@end
