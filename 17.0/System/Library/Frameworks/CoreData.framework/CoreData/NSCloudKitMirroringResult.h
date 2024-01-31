@class NSString, NSError, NSCloudKitMirroringRequest;

@interface NSCloudKitMirroringResult : NSPersistentStoreResult

@property (readonly, nonatomic) NSString *storeIdentifier;
@property (readonly, nonatomic) NSCloudKitMirroringRequest *request;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) BOOL madeChanges;
@property (readonly, nonatomic) NSError *error;

- (void)dealloc;
- (id)initWithRequest:(id)a0 storeIdentifier:(id)a1 success:(BOOL)a2 madeChanges:(BOOL)a3 error:(id)a4;
- (id)description;

@end
