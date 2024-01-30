@class NSString, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface SIMStatusIndicator : NSObject <CoreTelephonyClientSubscriberDelegate>

@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property void /* function */ *callback;
@property void *applicationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
