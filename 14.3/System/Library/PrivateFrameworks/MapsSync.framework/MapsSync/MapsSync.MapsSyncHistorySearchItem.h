@class NSString, GEOMapRegion;

@interface MapsSync.MapsSyncHistorySearchItem : MapsSync.MapsSyncHistoryItem {
    void /* unknown type, empty encoding */ _geoMapRegion;
    void /* unknown type, empty encoding */ _language;
    void /* unknown type, empty encoding */ _locationDisplay;
    void /* unknown type, empty encoding */ _query;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) GEOMapRegion *geoMapRegion;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *locationDisplay;
@property (nonatomic, readonly) NSString *query;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (Class)mutableObjectClass;
- (void)addEditWithBlock:(id /* block */)a0;
- (void)setPropertiesWithObject:(id)a0;
- (Class)managedObjectClass;
- (BOOL)isEqual:(id)a0;

@end
