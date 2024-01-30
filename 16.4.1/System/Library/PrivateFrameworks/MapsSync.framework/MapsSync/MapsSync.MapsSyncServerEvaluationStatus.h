@class NSString;

@interface MapsSync.MapsSyncServerEvaluationStatus : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _arpStatus;
    void /* unknown type, empty encoding */ _rapStatus;
}

@property (nonatomic, readonly) BOOL arpStatus;
@property (nonatomic, readonly) BOOL rapStatus;
@property (nonatomic, readonly) NSString *description;

- (id)initWithObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addEditWithBlock:(id /* block */)a0;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
