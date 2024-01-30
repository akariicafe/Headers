@class CKDPCSData;

@interface CKDPCSMemoryCacheEntry : NSObject

@property (retain, nonatomic) CKDPCSData *pcsData;
@property double lastAccess;

- (id)CKPropertiesDescription;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
