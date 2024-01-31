@class NSDictionary;

@interface NSCloudKitMirroringExportProgressResult : NSCloudKitMirroringResult

@property (readonly, nonatomic) NSDictionary *objectIDToLastExportedToken;

- (void)dealloc;
- (id)initWithRequest:(id)a0 storeIdentifier:(id)a1 objectIDToLastExportedToken:(id)a2 error:(id)a3;

@end
