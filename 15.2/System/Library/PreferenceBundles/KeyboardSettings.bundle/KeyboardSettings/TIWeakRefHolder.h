@interface TIWeakRefHolder : NSObject

@property (weak, nonatomic) id weakObject;

+ (id)weakRefHolderWithObject:(id)a0;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (id)strongRef;

@end
