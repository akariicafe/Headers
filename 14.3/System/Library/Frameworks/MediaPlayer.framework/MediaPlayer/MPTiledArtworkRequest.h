@class NSArray;
@protocol NSCopying;

@interface MPTiledArtworkRequest : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    NSArray *_artworkCatalogsCache;
    long long _artworkCatalogsCacheCount;
}

@property (copy, nonatomic) id /* block */ artworkCatalogsBlock;
@property (nonatomic) BOOL allowsSynchronousArtworkCatalogsBlockExecution;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic) double tileSpacing;
@property (copy, nonatomic) id<NSCopying> entityIdentifier;
@property (copy, nonatomic) id<NSCopying> namespaceIdentifier;
@property (copy, nonatomic) id<NSCopying> revisionIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)artworkCatalogsWithCount:(unsigned long long)a0;
- (id)existingArtworkCatalogsWithCount:(long long)a0;
- (BOOL)hasExistingArtworkCatalogsWithCount:(long long)a0;

@end
