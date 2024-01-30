@class NSString;

@interface BCSCoalesceObjectItems : NSObject <BCSCoalesceObjectProtocol>

@property (readonly, copy, nonatomic) id /* block */ itemsCompletionBlock;
@property (readonly, nonatomic) NSString *coalesceKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCompletionBlock:(id /* block */)a0 coalesceKey:(id)a1;

@end
