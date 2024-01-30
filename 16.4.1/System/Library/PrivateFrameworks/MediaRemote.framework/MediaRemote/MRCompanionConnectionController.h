@class NSString, NSDate, NSError, MRAVEndpoint;
@protocol MRCompanionConnectionControllerDelegate;

@interface MRCompanionConnectionController : NSObject {
    BOOL _isDiscovering;
    BOOL _isConnecting;
    NSString *_lastConnectionAttemptReason;
    NSDate *_lastConnectionAttemptDate;
    NSError *_lastConnectionAttemptError;
}

@property (retain, nonatomic) MRAVEndpoint *companionEndpoint;
@property (nonatomic) id<MRCompanionConnectionControllerDelegate> delegate;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)_handleCompanionDeviceConnectedNotification:(id)a0;
- (void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)a0;
- (void)_maybeAttemptToDiscoverAndConnectToCompanionWithReason:(id)a0;
- (BOOL)_shouldAttemptToDiscoverAndConnectToCompanion;

@end
