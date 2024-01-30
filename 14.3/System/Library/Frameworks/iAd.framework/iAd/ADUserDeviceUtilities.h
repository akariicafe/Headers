@class NSNumber;
@protocol NSObject;

@interface ADUserDeviceUtilities : NSObject

@property (retain) NSNumber *lastiTunesAccountID;
@property (retain, nonatomic) id<NSObject> notifyToken;
@property (readonly, nonatomic) BOOL deviceHasHomeButton;

+ (id)sharedInstance;
+ (id)iCloudAccount;
+ (BOOL)isiCloudAccountAvailable;
+ (id)iTunesAccountIdentifier;
+ (BOOL)educationModeEnabled;
+ (BOOL)isiCloudManagedAppleId;
+ (BOOL)isiTunesManagedAppleId;
+ (id)iTunesStoreAccount;
+ (BOOL)isiTunesAccountAvailable;
+ (BOOL)isManagedAppleId;

- (void).cxx_destruct;
- (void)unregisterForiTunesAccountChanges;

@end
