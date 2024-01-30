@class NSString, URTAlert;
@protocol URTDestinationPresentationDelegate;

@interface URTDefaultDestinationPresentation : URTUserNotificationPresentation <URTDestinationPresenting> {
    struct __CFRunLoopSource { } *_runLoopSource;
}

@property (readonly, nonatomic) URTAlert *alert;
@property (readonly, nonatomic) long long destination;
@property (weak, nonatomic) id<URTDestinationPresentationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)present;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_invokeDelegateForResponseFlags:(unsigned long long)a0;
- (id)initWithAlert:(id)a0 forDestination:(long long)a1;

@end
