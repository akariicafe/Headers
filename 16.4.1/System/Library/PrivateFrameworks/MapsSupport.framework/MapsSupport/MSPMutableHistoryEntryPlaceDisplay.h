@class NSUUID, NSString, NSDate;
@protocol GEOMapItem;

@interface MSPMutableHistoryEntryPlaceDisplay : MSPMutableHistoryEntry <MSPHistoryEntryPlaceDisplay>

@property (retain, nonatomic) id<GEOMapItem> geoMapItem;
@property (copy, nonatomic) NSUUID *supersededSearchStorageIdentifier;
@property (readonly, copy, nonatomic) NSDate *usageDate;
@property (readonly, nonatomic) BOOL tracksRAPReportingOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)mutableObjectClass;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (id)mutableObjectProtocol;

- (id)initWithStorage:(id)a0;
- (BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)a0;
- (id)transferToImmutableIfValidWithError:(out id *)a0;

@end
