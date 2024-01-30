@class NSString;

@interface BMDSLClassTransform : BMDSLBaseCodable <BMDSLTransform>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *className;
@property (copy, nonatomic) NSString *transformName;

+ (id)withClassName:(id)a0 selector:(SEL)a1;
+ (id)withClassName:(id)a0 transformName:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)transformInput:(id)a0 combinedState:(id)a1;
- (id)initWithName:(id)a0 version:(unsigned int)a1 className:(id)a2 transformName:(id)a3;
- (id)initWithClassName:(id)a0 transformName:(id)a1;
- (id)initWithClassName:(id)a0 selector:(SEL)a1;

@end
