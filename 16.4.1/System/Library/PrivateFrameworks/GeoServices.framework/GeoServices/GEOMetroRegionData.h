@class GEOGloriaDB;

@interface GEOMetroRegionData : NSObject {
    GEOGloriaDB *_db;
}

- (id)initWithFileURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)metroNameForLocation:(id)a0;

@end
