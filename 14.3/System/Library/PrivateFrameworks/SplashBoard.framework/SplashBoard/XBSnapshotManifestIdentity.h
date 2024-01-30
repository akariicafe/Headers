@class NSString;
@protocol XBSnapshotManifestStore;

@interface XBSnapshotManifestIdentity : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *defaultGroupIdentifier;
@property (readonly, copy, nonatomic) id<XBSnapshotManifestStore> store;

+ (id)identityWithBundleIdentifier:(id)a0 store:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 store:(id)a1;

@end
