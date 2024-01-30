@class NSArray, SCKZoneSchema, SCKZoneDiff;
@protocol SCKZoneStore;

@interface SCKZone : NSObject

@property (retain, nonatomic) id<SCKZoneStore> store;
@property (readonly, nonatomic) SCKZoneSchema *schema;
@property (readonly, copy, nonatomic) NSArray *clientRecords;
@property (readonly, copy, nonatomic) SCKZoneDiff *clientDiff;
@property (readonly, nonatomic) BOOL needsFirstSync;
@property (readonly, nonatomic, getter=isDirty) BOOL dirty;

- (id)initWithSchema:(id)a0 store:(id)a1;
- (void).cxx_destruct;

@end
