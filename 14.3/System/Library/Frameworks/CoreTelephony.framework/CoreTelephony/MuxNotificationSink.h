@class NSString;
@protocol MuxNotificationSinkDelegate;

@interface MuxNotificationSink : NSProxy <CoreTelephonyClientDelegateProxyInterface>

@property (weak, nonatomic) id<MuxNotificationSinkDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
