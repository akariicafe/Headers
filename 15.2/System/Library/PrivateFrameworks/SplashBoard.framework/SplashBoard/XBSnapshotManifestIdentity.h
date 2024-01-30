@class NSString;
@protocol XBSnapshotManifestStore;

@interface XBSnapshotManifestIdentity : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *defaultGroupIdentifier;
@property (readonly, copy, nonatomic) id<XBSnapshotManifestStore> store;

+ (id)identityWithBundleIdentifier:(id)a0 store:(id)a1;

- (id)initWithBundleIdentifier:(id)a0 store:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
