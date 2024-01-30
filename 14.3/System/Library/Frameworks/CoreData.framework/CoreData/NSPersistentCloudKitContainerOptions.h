@class NSString, NSObject;
@protocol NSCloudKitMirroringDelegateProgressProvider;

@interface NSPersistentCloudKitContainerOptions : NSObject

@property BOOL useEncryptedStorage;
@property BOOL useDeviceToDeviceEncryption;
@property (retain, nonatomic) NSString *apsConnectionMachServiceName;
@property (weak, nonatomic) NSObject<NSCloudKitMirroringDelegateProgressProvider> *progressProvider;
@property (readonly, copy) NSString *containerIdentifier;
@property (nonatomic) long long databaseScope;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContainerIdentifier:(id)a0;

@end
