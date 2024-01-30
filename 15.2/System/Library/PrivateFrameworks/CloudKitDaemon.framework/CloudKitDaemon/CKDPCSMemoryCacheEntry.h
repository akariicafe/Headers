@class CKDPCSData;

@interface CKDPCSMemoryCacheEntry : NSObject

@property (retain, nonatomic) CKDPCSData *pcsData;
@property double lastAccess;

- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
