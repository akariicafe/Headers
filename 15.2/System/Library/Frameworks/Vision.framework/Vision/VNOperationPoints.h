@interface VNOperationPoints : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)errorForUnknownClassificationIdentifier:(id)a0;
+ (id)errorForUnimplementedMethod:(SEL)a0;
+ (id)unspecifiedOperationPoints;
+ (id)loadFromURL:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)getDefaultConfidence:(float *)a0 forClassificationIdentifier:(id)a1 error:(id *)a2;
- (BOOL)getConfidence:(float *)a0 forClassificationIdentifier:(id)a1 withPrecision:(float)a2 error:(id *)a3;
- (BOOL)getPrecision:(float *)a0 forClassificationIdentifier:(id)a1 confidence:(float)a2 error:(id *)a3;
- (BOOL)getConfidence:(float *)a0 forClassificationIdentifier:(id)a1 withRecall:(float)a2 error:(id *)a3;
- (BOOL)getRecall:(float *)a0 forClassificationIdentifier:(id)a1 confidence:(float)a2 error:(id *)a3;

@end
