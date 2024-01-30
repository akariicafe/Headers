@class MSPHistoryEntryStorage, NSString, NSUUID, NSDate;

@interface MSPMutableHistoryEntry : NSObject <MSPHistoryEntry, MSPMutableObject> {
    NSUUID *_storageIdentifier;
}

@property (readonly, nonatomic, getter=_isImmutable) BOOL immutable;
@property (readonly, nonatomic) MSPHistoryEntryStorage *storage;
@property (copy, nonatomic) NSDate *usageDate;
@property (nonatomic, getter=tracksRAPReportingOnly) BOOL tracksRAPReportingOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mutableObjectProtocol;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)mutableHistoryEntryForStorage:(id)a0;

- (id)initWithStorage:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)debugTitle;
- (BOOL)isFailed;
- (id)storageIdentifier;
- (void)ifSearch:(id /* block */)a0 ifRoute:(id /* block */)a1 ifPlaceDisplay:(id /* block */)a2 ifTransitLineItem:(id /* block */)a3;
- (BOOL)isUserVisibleDuplicateOfEntry:(id)a0;
- (id)transferToImmutableIfValidWithError:(out id *)a0;
- (id)copyIfValidWithError:(out id *)a0;
- (void)_noteWillMutate;
- (void)ifMutableSearch:(id /* block */)a0 ifMutableRoute:(id /* block */)a1 ifMutablePlaceDisplay:(id /* block */)a2 ifMutableTransitLineItem:(id /* block */)a3;
- (BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)a0;
- (void)_markImmutable;

@end
