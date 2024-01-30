@class NSString;

@interface BMDSLInstanceTransform : BMDSL <BMDSLTransform>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *transformName;

+ (id)withSelector:(SEL)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)transformInput:(id)a0 combinedState:(id)a1;
- (id)initWithName:(id)a0 version:(unsigned int)a1 transformName:(id)a2;

@end
