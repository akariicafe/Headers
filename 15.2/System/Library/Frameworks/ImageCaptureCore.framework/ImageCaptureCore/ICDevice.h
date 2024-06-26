@class NSMutableDictionary, NSString, ICDeviceManager, NSMutableSet, NSDictionary, NSNumber, NSArray;
@protocol ICDeviceDelegate;

@interface ICDevice : NSObject

@property (nonatomic) struct CGImage { } *icon;
@property (retain, nonatomic) NSMutableSet *deviceCapabilities;
@property (retain, nonatomic) ICDeviceManager *deviceManager;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *productKind;
@property (copy, nonatomic) NSString *transportType;
@property (copy, nonatomic) NSString *UUIDString;
@property (copy, nonatomic) NSString *persistentIDString;
@property (nonatomic) int usbLocationID;
@property (nonatomic) int usbProductID;
@property (nonatomic) int usbVendorID;
@property (copy, nonatomic) NSString *internalUUID;
@property (copy, nonatomic) NSNumber *deviceHandle;
@property (copy, nonatomic) NSString *volumePath;
@property (nonatomic) BOOL hasOpenSession;
@property BOOL autoOpenSession;
@property BOOL openSessionPending;
@property BOOL closeSessionPending;
@property (copy) id /* block */ completionBlock;
@property (readonly, nonatomic) NSNumber *connectionID;
@property (readonly, nonatomic) NSNumber *deviceRef;
@property (readonly, nonatomic) NSNumber *deviceID;
@property (readonly, nonatomic) NSString *iconPath;
@property (readonly, nonatomic) NSString *bonjourServiceType;
@property (readonly, nonatomic) NSString *bonjourServiceName;
@property (readonly, nonatomic) NSDictionary *bonjourTXTRecord;
@property (readonly, nonatomic) NSString *ipAddress;
@property (readonly, nonatomic) int ipPort;
@property (retain) id userObject;
@property (readonly) BOOL preferred;
@property (readonly) double softwareInstallPercentDone;
@property (readonly) BOOL canCancelSoftwareInstallation;
@property (readonly, nonatomic) BOOL isAppleDevice;
@property (nonatomic) id<ICDeviceDelegate> delegate;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSArray *capabilities;
@property (readonly, copy, nonatomic) NSString *systemSymbolName;
@property (readonly, nonatomic) NSString *locationDescription;
@property (readonly, nonatomic) NSMutableDictionary *userData;
@property (readonly, nonatomic) NSString *modulePath;
@property (readonly, nonatomic) NSString *moduleVersion;
@property (readonly, nonatomic) NSString *serialNumberString;
@property (copy, nonatomic) NSString *autolaunchApplicationPath;
@property (readonly, getter=isRemote) BOOL remote;
@property (readonly) int moduleExecutableArchitecture;

- (id)valueForUndefinedKey:(id)a0;
- (void)requestEject;
- (BOOL)canEject;
- (BOOL)isAppleDevice;
- (id)description;
- (void)requestOpenSessionWithOptions:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)handleImageCaptureEventNotification:(id)a0;
- (void)handleCommandCompletionNotification:(id)a0;
- (void)dealloc;
- (void)addCapability:(id)a0;
- (void)requestOpenSessionWithOptions:(id)a0;
- (void)requestCloseSessionWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)requestOpenSession;
- (void)requestCloseSession;
- (void)removeCapability:(id)a0;
- (void)requestEjectWithCompletion:(id /* block */)a0;

@end
