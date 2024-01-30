@class WFRecordProperty;

@interface WFRecordPropertyMapping : NSObject

@property (weak, nonatomic) id sourceObject;
@property (retain, nonatomic) WFRecordProperty *sourceProperty;
@property (weak, nonatomic) id destinationObject;
@property (retain, nonatomic) WFRecordProperty *destinationProperty;

- (void)propagateUsingSetter;
- (void)invokeSetterWithBuffer:(void **)a0 length:(unsigned long long *)a1;
- (void)propagate:(BOOL)a0;
- (id)getterMethodSignature;
- (void)propagate;
- (SEL)getterSelector;
- (SEL)setterSelector;
- (void)invokeGetterWithBuffer:(void **)a0 length:(unsigned long long *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)setterMethodSignature;
- (id)initWithSourceObject:(id)a0 property:(id)a1 destinationObject:(id)a2 property:(id)a3;
- (unsigned long long)hash;
- (void)propagateUsingKVC;

@end
