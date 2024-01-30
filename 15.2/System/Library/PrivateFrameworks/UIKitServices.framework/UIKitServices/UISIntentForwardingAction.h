@class INIntentForwardingAction, INIntent;

@interface UISIntentForwardingAction : BSAction {
    INIntent *_cachedIntent;
    INIntentForwardingAction *_cachedIntentForwardingAction;
}

@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) INIntentForwardingAction *intentForwardingAction;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void).cxx_destruct;
- (long long)UIActionType;
- (id)initWithIntent:(id)a0 reply:(id /* block */)a1;
- (id)initWithIntentForwardingAction:(id)a0 responseHandler:(id /* block */)a1;

@end
