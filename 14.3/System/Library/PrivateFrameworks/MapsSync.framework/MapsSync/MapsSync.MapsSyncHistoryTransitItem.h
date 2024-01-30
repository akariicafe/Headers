@class NSString, NSData;

@interface MapsSync.MapsSyncHistoryTransitItem : MapsSync.MapsSyncHistoryItem {
    void /* unknown type, empty encoding */ _transitLineStorage;
    void /* unknown type, empty encoding */ _muid;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSData *transitLineItemStorageData;
@property (nonatomic, readonly) unsigned long long muid;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (Class)mutableObjectClass;
- (void)addEditWithBlock:(id /* block */)a0;
- (void)setPropertiesWithObject:(id)a0;
- (Class)managedObjectClass;
- (BOOL)isEqual:(id)a0;

@end
