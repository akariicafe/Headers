@class NSObject;
@protocol OS_dispatch_queue;

@interface ASDLevelControl : ASDControl {
    float _decibelValue;
    float _minimumDecibelValue;
    float _maximumDecibelValue;
    NSObject<OS_dispatch_queue> *_valueQueue;
}

@property (nonatomic) float decibelValue;
@property (nonatomic) float minimumDecibelValue;
@property (nonatomic) float maximumDecibelValue;
@property (nonatomic) float scalarValue;
@property (readonly, nonatomic, getter=isSettable) BOOL settable;

+ (id)volumeControlWithDecibelValue:(float)a0 minimumValue:(float)a1 maximumValue:(float)a2 isSettable:(BOOL)a3 forElement:(unsigned int)a4 inScope:(unsigned int)a5 withPlugin:(id)a6;

- (void).cxx_destruct;
- (id)initWithPlugin:(id)a0;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (float)scalarValue;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (unsigned int)baseClass;
- (float)decibelValue;
- (float)minimumDecibelValue;
- (float)maximumDecibelValue;
- (void)setScalarValue:(float)a0;
- (void)setDecibelValue:(float)a0;
- (float)scalarFromDecibel:(float)a0;
- (float)decibelFromScalar:(float)a0;
- (id)initWithElement:(unsigned int)a0 inScope:(unsigned int)a1 withPlugin:(id)a2;
- (id)initWithElement:(unsigned int)a0 inScope:(unsigned int)a1 withPlugin:(id)a2 andObjectClassID:(unsigned int)a3;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 andQualifierData:(const void *)a2;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int *)a3 andData:(void *)a4 forClient:(int)a5;
- (id)driverClassName;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int)a3 andData:(const void *)a4 forClient:(int)a5;
- (id)initWithDecibelValue:(float)a0 minimumValue:(float)a1 maximumValue:(float)a2 isSettable:(BOOL)a3 forElement:(unsigned int)a4 inScope:(unsigned int)a5 withPlugin:(id)a6 andObjectClassID:(unsigned int)a7;
- (BOOL)changeScalarValue:(float)a0;
- (BOOL)changeDecibelValue:(float)a0;
- (float)_scalarFromDecibel:(float)a0;
- (float)_decibelFromScalar:(float)a0;
- (id)initWithDecibelValue:(float)a0 minimumValue:(float)a1 maximumValue:(float)a2 isSettable:(BOOL)a3 forElement:(unsigned int)a4 inScope:(unsigned int)a5 withPlugin:(id)a6;
- (void)setMaximumDecibelValue:(float)a0;
- (void)setMinimumDecibelValue:(float)a0;

@end
