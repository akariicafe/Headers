@class NSArray;

@interface VCDaemonXPCEventHandler : NSObject {
    void /* unknown type, empty encoding */ streams;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ streamForEvent;
}

@property (nonatomic, readonly) NSArray *streams;

- (id)initWithStreams:(id)a0;
- (id)initWithStreams:(id)a0 queue:(id)a1;
- (void)removeObserver:(id)a0 name:(id)a1;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
