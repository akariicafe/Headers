@class NSError, NSCloudKitMirroringRequest;

@interface NSCloudKitMirroringResult : NSPersistentStoreResult

@property (readonly, nonatomic) NSCloudKitMirroringRequest *request;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) BOOL madeChanges;
@property (readonly, nonatomic) NSError *error;

- (void)dealloc;
- (id)initWithRequest:(id)a0 success:(BOOL)a1 madeChanges:(BOOL)a2 error:(id)a3;
- (id)description;

@end
