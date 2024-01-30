@class NSArray;

@interface MPModelPlaylistEntryKind : MPModelKind

@property (readonly, nonatomic) NSArray *kinds;

+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithKinds:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void)applyToView:(struct shared_ptr<mlcore::LibraryView> { struct LibraryView *x0; struct __shared_weak_count *x1; })a0 withContext:(id)a1;
- (id)humanDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
