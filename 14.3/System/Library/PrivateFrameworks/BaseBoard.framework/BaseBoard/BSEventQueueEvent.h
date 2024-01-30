@class NSString;

@interface BSEventQueueEvent : NSObject {
    id /* block */ _handler;
}

@property (readonly, copy, nonatomic) NSString *name;

+ (id)eventWithName:(id)a0 handler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)execute;
- (id)description;

@end
