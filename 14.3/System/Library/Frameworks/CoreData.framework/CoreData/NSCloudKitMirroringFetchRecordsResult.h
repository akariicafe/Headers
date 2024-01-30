@class NSArray, NSDictionary;

@interface NSCloudKitMirroringFetchRecordsResult : NSCloudKitMirroringResult

@property (readonly, nonatomic) NSArray *updatedObjectIDs;
@property (readonly, nonatomic) NSDictionary *failedObjectIDsToError;

- (void)dealloc;
- (id)initWithRequest:(id)a0 success:(BOOL)a1 madeChanges:(BOOL)a2 updatedObjectIDs:(id)a3 failedObjectIDToError:(id)a4 error:(id)a5;

@end
