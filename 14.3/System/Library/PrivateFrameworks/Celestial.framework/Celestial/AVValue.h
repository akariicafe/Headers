@interface AVValue : NSObject {
    SEL _selector;
}

+ (id)valueWithSelector:(SEL)a0;

- (id)initWithSelector:(SEL)a0;
- (SEL)selectorValue;

@end
