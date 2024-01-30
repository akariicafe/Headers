@class CKOperationConfiguration;

@interface NSCloudKitMirroringRequestOptions : NSObject

@property (retain, nonatomic) CKOperationConfiguration *operationConfiguration;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) BOOL allowsCellularAccess;

- (id)init;
- (void)dealloc;
- (id)copy;

@end
