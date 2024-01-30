@class NSString, INIntentResponse, INCExtensionTransactionState, NSMutableDictionary, NSUserActivity, INCExtensionRequest, INIntent, NSObject;
@protocol OS_dispatch_queue;

@interface INCExtensionTransaction : NSObject {
    NSMutableDictionary *_userActivitiesByIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic, setter=_setCurrentIntent:) INIntent *currentIntent;
@property (retain, nonatomic, setter=_setCurrentIntentResponse:) INIntentResponse *currentIntentResponse;
@property (readonly, nonatomic) BOOL donateInteraction;
@property (readonly, copy, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) INCExtensionRequest *request;
@property (readonly, copy, nonatomic) NSUserActivity *currentUserActivity;
@property (retain, nonatomic) INCExtensionTransactionState *state;
@property (nonatomic) BOOL shouldResetRequestAfterHandle;

+ (void)initialize;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIntent:(id)a0 donateInteraction:(BOOL)a1 groupIdentifier:(id)a2;
- (id)userActivityWithIdentifier:(id)a0;
- (void)_updateCurrentUserActivityForType:(long long)a0 intent:(id)a1 intentResponse:(id)a2;
- (void)_addUserActivities:(id)a0;

@end
