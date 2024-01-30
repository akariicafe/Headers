@class NSData, NSString;

@interface MSHistorySearchItem : MSHistoryItem {
    void /* unknown type, empty encoding */ _geoMapRegion;
    void /* unknown type, empty encoding */ _language;
    void /* unknown type, empty encoding */ _locationDisplay;
    void /* unknown type, empty encoding */ _query;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSData *geoMapRegion;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *locationDisplay;
@property (nonatomic, copy) NSString *query;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 geoMapRegion:(id)a1 language:(id)a2 locationDisplay:(id)a3 query:(id)a4;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;

@end
