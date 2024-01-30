@interface _MPHomeSharingArtworkCacheKey : NSObject

@property (readonly, nonatomic) unsigned long long persistentID;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

- (BOOL)isEqual:(id)a0;
- (id)initWithPersistentID:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (unsigned long long)hash;

@end
