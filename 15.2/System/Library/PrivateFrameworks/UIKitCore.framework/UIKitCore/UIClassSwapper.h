@class NSString;

@interface UIClassSwapper : NSObject {
    NSString *className;
    id object;
}

+ (id)swapperForObject:(id)a0 withClassName:(id)a1;

- (id)className;
- (void)encodeWithCoder:(id)a0;
- (id)performSelectorForObject:(id)a0 selector:(SEL)a1 withObject:(id)a2 withObject:(id)a3 withObject:(id)a4;
- (id)initWithObject:(id)a0 andClassName:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)object;

@end
