@class NSPointerArray;

@interface TSKPointerArrayLogContext : TSKCustomLogContext {
    NSPointerArray *_pointerArray;
}

+ (id)logContextWithPointerArray:(id)a0 parentLogContext:(id)a1;

- (void).cxx_destruct;
- (id)publicStringComponent;
- (id)initWithPointerArray:(id)a0 parentLogContext:(id)a1;

@end
