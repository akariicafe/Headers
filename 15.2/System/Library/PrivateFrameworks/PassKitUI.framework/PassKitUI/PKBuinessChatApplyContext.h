@class NSString;

@interface PKBuinessChatApplyContext : NSObject <PKBusinessChatContext> {
    NSString *_identifier;
    long long _intent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)requiresAuthorization;
- (void).cxx_destruct;
- (id)bodyText;
- (id)businessIdentifier;
- (id)intentParameters;
- (id)groupParameters;
- (id)initWithIdentifier:(id)a0 intent:(long long)a1;

@end
