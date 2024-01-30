@class NSString, DEDNotifierConfiguration, FLFollowUpController, NSObject;
@protocol OS_os_log;

@interface DEDFollowUpNotifier : NSObject <DEDNotifier, DEDSecureArchiving, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) DEDNotifierConfiguration *config;
@property (retain) NSString *bugSessionIdentifier;
@property (retain) FLFollowUpController *followUpController;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)scheduleNotification;
- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0 session:(id)a1;
- (void)cancelNotification;

@end
