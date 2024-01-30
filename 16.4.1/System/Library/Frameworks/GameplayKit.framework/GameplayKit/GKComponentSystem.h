@class NSArray, NSMutableArray;

@interface GKComponentSystem : NSObject <NSFastEnumeration> {
    NSMutableArray *_components;
}

@property (readonly, nonatomic) Class componentClass;
@property (readonly, retain, nonatomic) NSArray *components;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)addComponent:(id)a0;
- (void)removeComponent:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (void)updateWithDeltaTime:(double)a0;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)a0;
- (void)addComponentWithEntity:(id)a0;
- (id)initWithComponentClass:(Class)a0;
- (void)removeComponentWithEntity:(id)a0;

@end
