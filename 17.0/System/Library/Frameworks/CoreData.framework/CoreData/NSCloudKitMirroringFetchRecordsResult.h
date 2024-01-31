@class NSArray, NSDictionary;

@interface NSCloudKitMirroringFetchRecordsResult : NSCloudKitMirroringResult

@property (readonly, nonatomic) NSArray *updatedObjectIDs;
@property (readonly, nonatomic) NSDictionary *failedObjectIDsToError;

- (void)dealloc;
- (id)initWithRequest:(id)a0 storeIdentifier:(id)a1 success:(BOOL)a2 madeChanges:(BOOL)a3 updatedObjectIDs:(id)a4 failedObjectIDToError:(id)a5 error:(id)a6;

@end
