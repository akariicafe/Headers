@interface AXMTask : NSObject

@property (nonatomic, getter=isComplete) BOOL complete;
@property (copy, nonatomic) id /* block */ taskCompleteBlock;

- (void)markAsComplete:(BOOL)a0;
- (void).cxx_destruct;

@end
