@interface AXMTask : NSObject

@property (nonatomic, getter=isComplete) BOOL complete;
@property (copy, nonatomic) id /* block */ taskCompleteBlock;

- (void).cxx_destruct;
- (void)markAsComplete:(BOOL)a0;

@end
