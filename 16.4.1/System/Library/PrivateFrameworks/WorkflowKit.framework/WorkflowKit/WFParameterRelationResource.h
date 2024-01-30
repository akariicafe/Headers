@class NSString, WFAction;

@interface WFParameterRelationResource : WFResource <WFActionEventObserver>

@property (weak, nonatomic) WFAction *action;
@property (readonly, nonatomic) NSString *parameterKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)mustBeAvailableForDisplay;

- (void).cxx_destruct;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (id)comparedValues;
- (id)initWithParameterKey:(id)a0 parameterValues:(id)a1 relation:(id)a2;
- (void)refreshAvailability;
- (void)setupWithAction:(id)a0;

@end
