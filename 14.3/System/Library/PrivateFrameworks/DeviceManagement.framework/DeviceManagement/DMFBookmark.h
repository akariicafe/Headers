@class NSString, NSURL, NSArray;

@interface DMFBookmark : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSArray *children;
@property (readonly, nonatomic, getter=isFolder) BOOL folder;
@property (readonly, nonatomic, getter=isFavoritesFolder) BOOL favoritesFolder;
@property (readonly, nonatomic, getter=isReadingListFolder) BOOL readingListFolder;

+ (id)folderWithName:(id)a0 children:(id)a1 identifier:(id)a2;
+ (id)favoritesFolderWithChildren:(id)a0;
+ (id)readingListFolderWithChildren:(id)a0;
+ (id)folderWithName:(id)a0 children:(id)a1;
+ (id)leafBookmarkWithName:(id)a0 URL:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isFolderWithIdentifier:(id)a0;
- (id)initWithName:(id)a0 URL:(id)a1 children:(id)a2 identifier:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
