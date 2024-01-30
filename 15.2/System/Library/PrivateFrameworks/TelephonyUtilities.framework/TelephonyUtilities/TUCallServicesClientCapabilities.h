@protocol TUCallServicesClientCapabilitiesActions;

@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<TUCallServicesClientCapabilitiesActions> delegate;
@property (nonatomic) BOOL wantsCallDisconnectionOnInvalidation;
@property (nonatomic) BOOL wantsCallStopStreamingOnInvalidation;
@property (nonatomic) BOOL wantsFrequencyChangeNotifications;
@property (nonatomic) BOOL wantsCallNotificationsDisabledWhileSuspended;

- (void)save;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
