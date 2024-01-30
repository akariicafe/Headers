@class NSNumber, NSString;

@interface ASDManagedApplicationRequestOptions : ASDRequestOptions

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSNumber *externalVersionIdentifier;
@property (readonly, nonatomic) NSNumber *itemIdentifier;
@property (readonly, nonatomic) BOOL skipDownloads;
@property (nonatomic) long long requestType;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItemIdentifer:(id)a0 externalVersionIdentifier:(id)a1 bundleIdentifier:(id)a2 bundleVersion:(id)a3 skipDownloads:(BOOL)a4;
- (void)encodeWithCoder:(id)a0;

@end
