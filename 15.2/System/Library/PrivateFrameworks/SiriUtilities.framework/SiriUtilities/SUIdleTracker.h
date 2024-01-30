@interface SUIdleTracker : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ timeout;
    void /* unknown type, empty encoding */ timeoutAction;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ refs;
    void /* unknown type, empty encoding */ lock;
}

@property (nonatomic, readonly) BOOL idle;
@property (nonatomic, readonly) long long count;

- (id)track;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;
- (id)initWithName:(id)a0 queue:(id)a1 timeoutSeconds:(long long)a2 timeoutAction:(id /* block */)a3;
- (id)trackWithName:(id)a0;

@end
