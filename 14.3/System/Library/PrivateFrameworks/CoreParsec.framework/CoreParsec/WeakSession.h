@class PARSession;

@interface WeakSession : NSObject {
    PARSession *_weakSession;
}

@property (readonly, nonatomic) PARSession *strongSession;

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;

@end
