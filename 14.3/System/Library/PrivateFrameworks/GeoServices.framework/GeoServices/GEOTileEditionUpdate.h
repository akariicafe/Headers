@class NSMutableArray;

@interface GEOTileEditionUpdate : NSObject {
    NSMutableArray *_entries;
}

@property (nonatomic) BOOL flushEverything;
@property (nonatomic) BOOL invalidateEverything;

- (id)init;
- (void).cxx_destruct;
- (void)tileset:(unsigned int *)a0 edition:(unsigned int *)a1 provider:(unsigned int *)a2 invalidateOnly:(BOOL *)a3 atIndex:(unsigned long long)a4;
- (void)addTileset:(unsigned int)a0 edition:(unsigned int)a1 provider:(unsigned int)a2 invalidateOnly:(BOOL)a3;
- (unsigned long long)tilesetCount;

@end
