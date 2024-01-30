@class NSString;

@interface XPCStreamEventRegistration : NSObject

@property (readonly, nonatomic) NSString *streamName;
@property (readonly, nonatomic) NSString *eventName;
@property (copy, nonatomic) id /* block */ handler;

+ (id)registrationWithStream:(id)a0 eventName:(id)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)_initWithStream:(id)a0 eventName:(id)a1 handler:(id /* block */)a2;

@end
