@class NSString;

@interface WFStorageServiceCancellableOperation : NSObject <WFFileStorageServiceOperation>

@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithCancelBlock:(id /* block */)a0;

@end
