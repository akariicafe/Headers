@class NSString;

@interface MapsSync.MapsSyncHistoryEvDirectionsItem : MapsSync.MapsSyncHistoryDirectionsItem {
    void /* unknown type, empty encoding */ _requiredCharge;
    void /* unknown type, empty encoding */ _vehicleIdentifier;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) double requiredCharge;
@property (nonatomic, readonly) NSString *vehicleIdentifier;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (Class)mutableObjectClass;
- (void)addEditWithBlock:(id /* block */)a0;
- (void)setPropertiesWithObject:(id)a0;
- (Class)managedObjectClass;
- (BOOL)isEqual:(id)a0;

@end
