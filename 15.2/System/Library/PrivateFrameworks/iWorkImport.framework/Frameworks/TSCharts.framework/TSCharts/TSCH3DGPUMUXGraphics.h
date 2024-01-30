@interface TSCH3DGPUMUXGraphics : NSObject {
    long long _interestCount;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addInterestForDiscreteGraphics;
- (void)removeInterestForDiscreteGraphics;

@end
