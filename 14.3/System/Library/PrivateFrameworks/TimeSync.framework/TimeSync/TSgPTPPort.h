@class IOKNotificationPort, IOKInterestNotification, IOKService, NSObject;
@protocol OS_dispatch_queue;

@interface TSgPTPPort : NSObject {
    IOKService *_service;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    IOKNotificationPort *_notificationPort;
    IOKInterestNotification *_interestNotification;
    IOKInterestNotification *_terminationNotification;
    NSObject<OS_dispatch_queue> *_internalPropertyUpdateQueue;
}

@property (nonatomic) unsigned short portNumber;
@property (nonatomic) int portRole;
@property (nonatomic) unsigned long long clockIdentifier;
@property (readonly, nonatomic) IOKService *service;
@property (readonly, nonatomic) int portType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue;

+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)gPTPPortWithService:(id)a0;
+ (id)diagnosticInfoForService:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned short)_portNumber;
- (id)initWithService:(id)a0;
- (id)_notificationPort;
- (id)_notificationQueue;
- (id)initWithMatchingDictionary:(id)a0;
- (int)portType;
- (unsigned long long)_clockIdentifier;
- (int)_portRole;
- (void)serviceTerminated;
- (BOOL)_commonInitWithService:(id)a0;
- (void)updateProperties;
- (BOOL)startAutomaticPropertyUpdates;
- (BOOL)stopAutomaticPropertyUpdates;

@end
