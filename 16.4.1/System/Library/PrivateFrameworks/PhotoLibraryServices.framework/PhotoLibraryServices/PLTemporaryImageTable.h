@class NSString, NSMutableArray;
@protocol PLThumbPersistenceManager;

@interface PLTemporaryImageTable : NSObject {
    id<PLThumbPersistenceManager> _imageTable;
    unsigned long long _nextTableEntryIndex;
    NSMutableArray *_itemIndexToThumbEntryMapping;
    NSString *_imageTablePath;
    unsigned short _imageFormatID;
}

- (void)_cleanup;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (void)removeItemAtIndex:(unsigned long long)a0;
- (unsigned long long)_imageTableIndexForItemIndex:(unsigned long long)a0;
- (void)_positional_setThumbnailsWithIdentifier:(id)a0 thumbnailIndex:(unsigned long long)a1 image:(id)a2 assetUUID:(id)a3;
- (BOOL)_writeBGRAThumbnailDataForImage:(id)a0 intoTable:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)_writeCompressedThumbnailDataForImage:(id)a0 intoTable:(id)a1 atIndex:(unsigned long long)a2;
- (id)imageForItemAtIndex:(unsigned long long)a0;
- (id)initWithWithPath:(id)a0 imageFormat:(unsigned short)a1;
- (void)insertItemAtIndex:(unsigned long long)a0;
- (void)setImage:(id)a0 forItemAtIndex:(unsigned long long)a1;

@end
