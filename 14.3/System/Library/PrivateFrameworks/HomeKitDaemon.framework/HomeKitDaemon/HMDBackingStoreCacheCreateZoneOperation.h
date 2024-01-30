@class NSString;

@interface HMDBackingStoreCacheCreateZoneOperation : HMDBackingStoreOperation

@property (retain, nonatomic) NSString *zoneName;
@property (copy, nonatomic) id /* block */ creationBlock;

- (void).cxx_destruct;
- (id)initWithZoneName:(id)a0 creationBlock:(id /* block */)a1;
- (id)mainReturningError;

@end
