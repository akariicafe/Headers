@class NSDictionary;

@interface ASTIdentityAlias : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *dictionary;

+ (BOOL)isCoreRepairFrameworkAvailable;
+ (id)identityAliasWithSerialNumber:(id)a0;
+ (id)identityAliasWithMainLogicBoardSerialNumber:(id)a0;
+ (id)identityAliasWithChipId:(id)a0 uniqueChipId:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSerialNumber:(id)a0;
- (id)initWithMainLogicBoardSerialNumber:(id)a0;
- (id)initWithChipId:(id)a0 uniqueChipId:(id)a1;

@end
