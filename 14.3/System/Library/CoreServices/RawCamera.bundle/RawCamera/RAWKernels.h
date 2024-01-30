@class NSMutableDictionary;

@interface RAWKernels : NSObject {
    NSMutableDictionary *priv;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)kernelWithName:(id)a0;
+ (id)sharedKernels;
+ (id)kernelWithName:(id)a0 group:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)kernelSourceForGroup:(id)a0;
- (id)loadKernelsForGroup:(id)a0;
- (id)kernelWithName:(id)a0 group:(id)a1;

@end
