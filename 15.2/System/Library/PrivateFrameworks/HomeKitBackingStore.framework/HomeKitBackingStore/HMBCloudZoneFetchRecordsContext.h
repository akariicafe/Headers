@class NSSet, NAFuture;

@interface HMBCloudZoneFetchRecordsContext : HMFObject

@property (readonly, copy) NSSet *recordIDs;
@property (readonly) NAFuture *future;

- (void).cxx_destruct;
- (id)initWithRecordIDs:(id)a0 future:(id)a1;

@end
