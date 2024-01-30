@class CRSet, NSSet;

@interface CRRegisterMultiValue : CRRegister

@property (retain, nonatomic) CRSet *values;
@property (retain, nonatomic) NSSet *cachedValues;

- (id)initWithContents:(id)a0 document:(id)a1;
- (void).cxx_destruct;
- (id)contents;
- (id)allContents;
- (void)mergeWithRegisterMultiValue:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)mergeWith:(id)a0;
- (id)description;
- (void)setContents:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void)setDocument:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (void)encodeWithCRCoder:(id)a0;
- (id)initWithValues:(id)a0;

@end
