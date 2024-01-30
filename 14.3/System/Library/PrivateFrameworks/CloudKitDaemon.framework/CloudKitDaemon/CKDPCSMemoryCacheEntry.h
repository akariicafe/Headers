@class CKDPCSData;

@interface CKDPCSMemoryCacheEntry : NSObject

@property (retain, nonatomic) CKDPCSData *pcsData;
@property double lastAccess;

- (id)CKPropertiesDescription;
- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
