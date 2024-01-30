@class INIntent, NSString, INIntentResponse, NSArray;

@interface VSUIVoiceShortcutCard : VSUIAsyncLoadingCard

@property (readonly, nonatomic) NSString *shortcutIdentifier;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) INIntentResponse *intentResponse;
@property (readonly, nonatomic) NSArray *sectionCommands;

- (void).cxx_destruct;
- (id)cardIdentifier;
- (id)initWithCard:(id)a0;
- (void)loadCardWithCompletion:(id /* block */)a0;
- (void)loadCardWithContent:(id)a0 completion:(id /* block */)a1;
- (void)_configureWithCard:(id)a0;

@end
