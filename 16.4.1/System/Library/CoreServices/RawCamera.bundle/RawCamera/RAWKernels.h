@class NSMutableDictionary;

@interface RAWKernels : NSObject {
    NSMutableDictionary *priv;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)kernelWithName:(id)a0;
+ (id)kernelWithName:(id)a0 group:(id)a1;
+ (id)sharedKernels;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)kernelSourceForGroup:(id)a0;
- (id)kernelWithName:(id)a0 group:(id)a1;
- (id)loadKernelsForGroup:(id)a0;

@end
