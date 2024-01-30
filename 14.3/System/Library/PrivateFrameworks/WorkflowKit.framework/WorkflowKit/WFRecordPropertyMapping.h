@class WFRecordProperty;

@interface WFRecordPropertyMapping : NSObject

@property (weak, nonatomic) id sourceObject;
@property (retain, nonatomic) WFRecordProperty *sourceProperty;
@property (weak, nonatomic) id destinationObject;
@property (retain, nonatomic) WFRecordProperty *destinationProperty;

- (id)getterMethodSignature;
- (void).cxx_destruct;
- (SEL)setterSelector;
- (unsigned long long)hash;
- (id)setterMethodSignature;
- (BOOL)isEqual:(id)a0;
- (SEL)getterSelector;
- (id)initWithSourceObject:(id)a0 property:(id)a1 destinationObject:(id)a2 property:(id)a3;
- (void)propagate;
- (void)propagate:(BOOL)a0;
- (void)propagateUsingKVC;
- (void)propagateUsingSetter;
- (void)invokeGetterWithBuffer:(void **)a0 length:(unsigned long long *)a1;
- (void)invokeSetterWithBuffer:(void **)a0 length:(unsigned long long *)a1;

@end
