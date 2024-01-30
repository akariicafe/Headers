@class NSString, NSMutableArray;
@protocol PLThumbPersistenceManager;

@interface PLTemporaryImageTable : NSObject {
    id<PLThumbPersistenceManager> _imageTable;
    unsigned long long _nextTableEntryIndex;
    NSMutableArray *_itemIndexToThumbEntryMapping;
    NSString *_imageTablePath;
    unsigned short _imageFormat;
}

- (void)insertItemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)reset;
- (void)dealloc;
- (void)removeItemAtIndex:(unsigned long long)a0;
- (void)setImage:(id)a0 forItemAtIndex:(unsigned long long)a1;
- (void)_positional_setThumbnailsWithIdentifier:(id)a0 thumbnailIndex:(unsigned long long)a1 image:(id)a2 assetUUID:(id)a3;
- (id)initWithWithPath:(id)a0 imageFormat:(unsigned short)a1;
- (unsigned long long)_imageTableIndexForItemIndex:(unsigned long long)a0;
- (id)imageForItemAtIndex:(unsigned long long)a0;

@end
