@class NSData;

@interface MapsSync.MapsSyncAnalyticsIdentifier : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _data;
}

@property (nonatomic, readonly) NSData *data;

- (void)addEditWithBlock:(id /* block */)a0;
- (void)setPropertiesWithObject:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (Class)mutableObjectClass;
- (Class)managedObjectClass;

@end
