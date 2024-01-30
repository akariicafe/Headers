@class NSArray, NSString;

@interface RBSTerminateContext : NSObject <RBSXPCSecureCoding, NSCopying>

@property (copy, nonatomic) NSArray *attributes;
@property (nonatomic) BOOL preventIfBeingDebugged;
@property (copy, nonatomic) NSString *explanation;
@property (nonatomic) unsigned long long reportType;
@property (nonatomic) unsigned int exceptionDomain;
@property (nonatomic) unsigned long long exceptionCode;
@property (nonatomic) unsigned char maximumTerminationResistance;
@property (readonly, nonatomic) BOOL shouldTerminatePlugIns;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)defaultContextWithExplanation:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithExplanation:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
