@class NSString;

@interface AXEventListenerContainer : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSString *identifier;

- (void).cxx_destruct;

@end
