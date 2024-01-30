@class NSString;

@interface TRIAppContainer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;

+ (id)containerWithIdentifier:(id)a0 type:(long long)a1;

- (id)containerURL;
- (id)_appDataContainerDirectoryAsSystemWithError:(id *)a0;
- (id)_appBundleContainerDirectoryAsOwner;
- (id)_groupContainerDirectoryAsOwner;
- (id)_appDataContainerDirectoryAsOwner;
- (id)_containerError:(unsigned long long)a0 withFormat:(id)a1;
- (id)_appContainerDirectoryAsSystemWithContainerClass:(unsigned long long)a0 error:(id *)a1;
- (id)containerURLAsOwner;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToContainer:(id)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementIdentifier:(id)a0;
- (id)copyWithReplacementType:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)fetchStatus;
- (unsigned long long)hash;
- (id)_containerURLWithError:(id *)a0;
- (id)_appBundleContainerDirectoryAsSystemWithError:(id *)a0;
- (id)_groupContainerDirectoryAsSystemWithError:(id *)a0;
- (id)sanitizedIdentifier;

@end
