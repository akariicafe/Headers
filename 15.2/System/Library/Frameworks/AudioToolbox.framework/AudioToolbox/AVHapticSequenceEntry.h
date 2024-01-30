@interface AVHapticSequenceEntry : NSObject

@property (copy) id /* block */ handler;
@property BOOL running;
@property BOOL detached;

- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0;

@end
