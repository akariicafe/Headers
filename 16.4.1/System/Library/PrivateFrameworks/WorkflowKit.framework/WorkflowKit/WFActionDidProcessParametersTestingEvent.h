@class NSDictionary;

@interface WFActionDidProcessParametersTestingEvent : WFActionTestingEvent

@property (readonly, nonatomic) NSDictionary *processedParameters;

- (void).cxx_destruct;
- (id)initWithAction:(id)a0 processedParameters:(id)a1;

@end
