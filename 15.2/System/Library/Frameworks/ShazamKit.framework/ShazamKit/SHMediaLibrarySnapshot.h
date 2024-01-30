@class NSArray, NSMutableSet;

@interface SHMediaLibrarySnapshot : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableSet *changeset;
@property (readonly, nonatomic) NSArray *changes;

- (void)addItem:(id)a0;
- (id)initWithChanges:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)removeItem:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)updateItem:(id)a0;
- (void)addChanges:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isConflictingChange:(id)a0;
- (void)mergeSnapshot:(id)a0;

@end
