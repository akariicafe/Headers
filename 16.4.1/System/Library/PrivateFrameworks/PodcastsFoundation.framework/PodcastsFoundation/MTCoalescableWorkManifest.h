@class NSArray;

@interface MTCoalescableWorkManifest : NSObject

@property (copy, nonatomic) id /* block */ workBlock;
@property (retain, nonatomic) NSArray *completions;

- (id)description;
- (void).cxx_destruct;
- (id)initWithWorkBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithWorkBlock:(id /* block */)a0 completions:(id)a1;
- (id)manifestByReplacingWorkBlock:(id /* block */)a0 appendingCompletion:(id /* block */)a1;

@end
