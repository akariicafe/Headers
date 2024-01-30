@class NSString;

@interface HKSPXPCMessage : NSObject <BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithIdentifier:(id)a0 block:(id /* block */)a1 options:(unsigned long long)a2 errorHandler:(id /* block */)a3;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
