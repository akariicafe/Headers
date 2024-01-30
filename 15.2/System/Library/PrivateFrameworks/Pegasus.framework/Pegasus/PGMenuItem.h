@class NSDictionary, NSString;

@interface PGMenuItem : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) long long identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, copy, nonatomic) id /* block */ action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithDictionary:(id)a0 action:(id /* block */)a1;
- (void)invokeAction;
- (id)initWithTitle:(id)a0 symbolName:(id)a1 action:(id /* block */)a2;

@end
