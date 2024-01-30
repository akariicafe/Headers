@class NSString, NSSet;

@interface _BRContainerItem : BRQueryItem <NSSecureCoding, NSCopying> {
    NSString *_containerID;
    NSSet *_containerClientIDs;
    NSString *_localizedName;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)typeIdentifier;
- (id)displayName;
- (id)itemIdentifier;
- (unsigned long long)capabilities;
- (id)filename;
- (id)fp_cloudContainerClientBundleIdentifiers;
- (void)encodeWithCoder:(id)a0;
- (id)fp_cloudContainerIdentifier;
- (id)containerDisplayName;
- (BOOL)fp_isContainer;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)parentItemIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQueryItem:(id)a0 container:(id)a1 zoneRowID:(id)a2;

@end
