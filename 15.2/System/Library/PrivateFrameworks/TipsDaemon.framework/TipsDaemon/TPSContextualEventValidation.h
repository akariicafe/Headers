@class NSString, TPSContextualEvent, TPSEventsProvider;

@interface TPSContextualEventValidation : TPSTargetingValidation <TPSEventsProviderDelegate>

@property (retain, nonatomic) TPSContextualEvent *event;
@property (retain, nonatomic) TPSEventsProvider *eventProvider;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
