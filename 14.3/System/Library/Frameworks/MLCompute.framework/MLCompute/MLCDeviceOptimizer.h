@class NSData;

@interface MLCDeviceOptimizer : NSObject <NSCopying>

@property (nonatomic) unsigned long long timeStep;
@property (readonly, nonatomic) id kernel;
@property (readonly, nonatomic) unsigned int function;
@property (readonly, retain, nonatomic) NSData *optimizerAlgFields;

+ (id)deviceOptimizerWithKernel:(id)a0;
+ (id)deviceOptimizerWithFunction:(unsigned int)a0 optimizerAlgFields:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithKernel:(id)a0;
- (id)initWithFunction:(unsigned int)a0 optimizerAlgFields:(id)a1;

@end
