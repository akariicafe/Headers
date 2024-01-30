@class NSString, NSNumber, NSArray;

@interface CHSFontSpecification : NSObject <BSXPCSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long design;
@property (copy, nonatomic) NSNumber *size;
@property (copy, nonatomic) NSNumber *weight;
@property (copy, nonatomic) NSArray *fontFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithFontSpecification:(id)a0;

@end
