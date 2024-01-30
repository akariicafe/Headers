@class NSString, FBSDisplayLayoutElement, FBMainDisplayLayoutPublisher;
@protocol BSInvalidatable;

@interface FBDisplayLayoutElement : NSObject <BSDescriptionProviding> {
    FBMainDisplayLayoutPublisher *_publisher;
    NSString *_key;
    id<BSInvalidatable> _activeAssertion;
}

@property (readonly, nonatomic) long long displayType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) FBSDisplayLayoutElement *element;
@property (readonly, nonatomic) Class elementClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)succinctDescription;
- (void)activateWithBuilder:(id /* block */)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)activate;
- (id)succinctDescriptionBuilder;
- (id)initWithDisplayType:(long long)a0 identifier:(id)a1 elementClass:(Class)a2;
- (void)deactivate;
- (void)updateWithBuilder:(id /* block */)a0;

@end
