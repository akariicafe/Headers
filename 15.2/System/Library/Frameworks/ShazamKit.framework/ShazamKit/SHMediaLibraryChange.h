@class NSIndexPath;
@protocol SHMediaLibraryItem;

@interface SHMediaLibraryChange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<SHMediaLibraryItem> libraryItem;
@property (readonly, nonatomic) long long changeType;
@property (readonly, nonatomic) NSIndexPath *indexPath;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)_initWithLibraryItem:(id)a0 changeType:(long long)a1 indexPath:(id)a2;
- (id)initWithLibraryItem:(id)a0 changeType:(long long)a1 indexPath:(id)a2;
- (BOOL)isEqualChange:(id)a0;
- (id)initWithLibraryItem:(id)a0 changeType:(long long)a1;

@end
