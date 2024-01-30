@class NSString;

@interface MSCommunityID : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _communityIdentifier;
    void /* unknown type, empty encoding */ _expired;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _usedCount;
    void /* unknown type, empty encoding */ _rapRecordChanges;
    void /* unknown type, empty encoding */ _reviewedPlaceChanges;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSString *communityIdentifier;
@property (nonatomic) BOOL expired;
@property (nonatomic) long long positionIndex;
@property (nonatomic) long long usedCount;

- (void).cxx_destruct;
- (id)fetchRapRecords;
- (void)addRapRecord:(id)a0;
- (void)addReviewedPlace:(id)a0;
- (id)fetchReviewedPlaces;
- (void)flushChanges;
- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 communityIdentifier:(id)a1 expired:(BOOL)a2 positionIndex:(long long)a3 usedCount:(long long)a4;
- (void)removeRapRecord:(id)a0;
- (void)removeReviewedPlace:(id)a0;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;

@end
