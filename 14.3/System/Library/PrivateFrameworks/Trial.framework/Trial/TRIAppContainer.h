@class NSString;

@interface TRIAppContainer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;

+ (id)containerWithIdentifier:(id)a0 type:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (long long)fetchStatus;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_containerURLWithError:(id *)a0;
- (id)_appBundleContainerDirectoryAsSystemWithError:(id *)a0;
- (id)_groupContainerDirectoryAsSystemWithError:(id *)a0;
- (id)_appDataContainerDirectoryAsSystemWithError:(id *)a0;
- (id)_appBundleContainerDirectoryAsOwner;
- (id)_groupContainerDirectoryAsOwner;
- (id)_appDataContainerDirectoryAsOwner;
- (id)sanitizedIdentifier;
- (id)_containerError:(unsigned long long)a0 withFormat:(id)a1;
- (id)_appContainerDirectoryAsSystemWithContainerClass:(unsigned long long)a0 error:(id *)a1;
- (id)containerURLAsOwner;
- (BOOL)isEqualToContainer:(id)a0;
- (id)copyWithReplacementIdentifier:(id)a0;
- (id)copyWithReplacementType:(long long)a0;
- (id)containerURL;
- (id)initWithIdentifier:(id)a0 type:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
