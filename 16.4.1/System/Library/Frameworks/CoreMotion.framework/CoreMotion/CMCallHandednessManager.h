@class NSObject;
@protocol CMCallHandednessDelegate, OS_dispatch_queue;

@interface CMCallHandednessManager : NSObject {
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    struct Dispatcher { void /* function */ **x0; id x1; } *fDispatcher;
}

@property (nonatomic) id<CMCallHandednessDelegate> delegate;

+ (BOOL)isCallHandednessAvailable;

- (void)stopCallHandednessUpdates;
- (void)dealloc;
- (void)startCallHandednessUpdates;
- (id)init;
- (void)onCallHandednessStateUpdated:(const struct Sample { unsigned char x0; double x1; } *)a0;

@end
