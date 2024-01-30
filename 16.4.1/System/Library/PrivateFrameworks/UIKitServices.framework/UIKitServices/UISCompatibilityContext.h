@class NSArray, NSString;

@interface UISCompatibilityContext : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) NSArray *supportedDisplaySizes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSupportedDisplaySizes:(id)a0;

@end
