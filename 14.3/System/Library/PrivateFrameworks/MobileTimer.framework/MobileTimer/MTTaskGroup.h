@class NSArray;

@interface MTTaskGroup : NSObject

@property (copy, nonatomic) NSArray *tasks;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (id)taskGroupWithTasks:(id)a0 completionBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (id)description;

@end
