@class NSDate;
@protocol NSObject, NSCoding, NSCopying;

@interface CUIKiCloudKVStore : NSObject

@property (retain) id<NSObject, NSCopying, NSCoding> ubiquityIdentityToken;
@property (nonatomic) BOOL hasConnectedToCarBluetooth;
@property (retain, nonatomic) NSDate *lastCarConnectionDate;

+ (BOOL)_haveiCloudKVStoreEntitlement;
+ (id)sharediCloudKVStore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_canAccessiCloudKVStore;
- (void)_identityChanged:(id)a0;
- (void)_storeDidChange:(id)a0;

@end
