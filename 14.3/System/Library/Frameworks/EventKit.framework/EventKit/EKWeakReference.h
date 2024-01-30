@interface EKWeakReference : NSObject

@property (weak, nonatomic) id value;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0;

@end
