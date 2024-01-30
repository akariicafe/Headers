@class MSCommunityID, NSData, NSDate, NSNumber;

@interface MSReviewedPlace : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _hasUserReviewed;
    void /* unknown type, empty encoding */ _lastSuggestedReviewDate;
    void /* unknown type, empty encoding */ _latitude;
    void /* unknown type, empty encoding */ _longitude;
    void /* unknown type, empty encoding */ _mapItemIdComparableRepresentation;
    void /* unknown type, empty encoding */ _muid;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _rating;
    void /* unknown type, empty encoding */ _resultProviderIdentifier;
    void /* unknown type, empty encoding */ _uploadedPhotosCount;
    void /* unknown type, empty encoding */ _version;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) BOOL hasUserReviewed;
@property (nonatomic, copy) NSDate *lastSuggestedReviewDate;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, copy) NSData *mapItemIdComparableRepresentation;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) long long positionIndex;
@property (nonatomic, retain) NSNumber *rating;
@property (nonatomic, retain) NSNumber *resultProviderIdentifier;
@property (nonatomic) int uploadedPhotosCount;
@property (nonatomic) short version;
@property (nonatomic, readonly) MSCommunityID *communityID;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 hasUserReviewed:(BOOL)a1 lastSuggestedReviewDate:(id)a2 latitude:(id)a3 longitude:(id)a4 mapItemIdComparableRepresentation:(id)a5 muid:(unsigned long long)a6 positionIndex:(long long)a7 rating:(id)a8 resultProviderIdentifier:(id)a9 uploadedPhotosCount:(int)a10 version:(short)a11;
- (BOOL)setCommunityID:(id)a0 error:(id *)a1;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;

@end
