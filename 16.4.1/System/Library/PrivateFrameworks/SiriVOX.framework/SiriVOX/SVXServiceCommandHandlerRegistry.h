@class NSDictionary;

@interface SVXServiceCommandHandlerRegistry : NSObject {
    NSDictionary *_handlersByServiceCommandClassName;
}

- (void).cxx_destruct;
- (id)initWithHandlers:(id)a0;
- (id)handlersForCommand:(id)a0;

@end
