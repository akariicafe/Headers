@class NSDictionary;

@interface NSCloudKitMirroringExportProgressResult : NSCloudKitMirroringResult

@property (readonly, nonatomic) NSDictionary *objectIDToLastExportedToken;

- (void)dealloc;
- (id)initWithRequest:(id)a0 objectIDToLastExportedToken:(id)a1 error:(id)a2;

@end
