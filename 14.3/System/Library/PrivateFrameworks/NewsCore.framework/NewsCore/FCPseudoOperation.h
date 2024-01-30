@class NSString;

@interface FCPseudoOperation : NSObject <FCOperationCanceling, FCOperationIdentifying, FCOperationPrioritizing>

@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) NSString *shortOperationDescription;
@property (copy, nonatomic) NSString *longOperationDescription;
@property (copy, nonatomic) id /* block */ priorityBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long relativePriority;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCancelBlock:(id /* block */)a0 priorityBlock:(id /* block */)a1;
- (id)initWithCancelBlock:(id /* block */)a0 priorityBlock:(id /* block */)a1 shortDescription:(id)a2 longDescription:(id)a3;

@end
