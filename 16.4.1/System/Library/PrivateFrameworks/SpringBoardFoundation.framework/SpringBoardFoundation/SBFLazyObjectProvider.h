@interface SBFLazyObjectProvider : NSObject

@property (retain, nonatomic) id object;
@property (copy, nonatomic) id /* block */ generator;

- (void).cxx_destruct;
- (id)initWithGenerator:(id /* block */)a0;

@end
