@class INIntentForwardingActionResponse, INIntentResponse;

@interface UISIntentForwardingActionResponse : BSActionResponse {
    INIntentResponse *_cachedIntentResponse;
    INIntentForwardingActionResponse *_cachedIntentForwardingActionResponse;
}

@property (readonly, nonatomic) INIntentResponse *intentResponse;
@property (readonly, nonatomic) INIntentForwardingActionResponse *intentForwardingActionResponse;

+ (id)responseWithIntentForwardingActionResponse:(id)a0;
+ (id)responseWithIntentResponse:(id)a0;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithIntentForwardingActionResponse:(id)a0;
- (id)initWithIntentResponse:(id)a0;

@end
