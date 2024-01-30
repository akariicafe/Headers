@class NSString;
@protocol SRDaemonNotificationDelegate;

@interface SRDaemonNotification : NSObject {
    int _registrationToken;
    int _significantTimeChangeToken;
    int _resetDatastoreToken;
    id<SRDaemonNotificationDelegate> _delegate;
    NSString *_sensorIdentifier;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)dealloc;

@end
