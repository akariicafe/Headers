@class IOUSBHostObject, NSRecursiveLock;

@interface IOUSBHostInterestNotificationReference : NSObject

@property (weak) IOUSBHostObject *hostObject;
@property BOOL interestNotificationPortDestroyed;
@property (retain) NSRecursiveLock *interestNotificationLock;

- (void).cxx_destruct;
- (id)initWithHostObject:(id)a0;

@end
