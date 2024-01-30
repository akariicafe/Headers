@class NSDictionary, NSObject;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPHIDGCSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDictionary *_options;
}

@property (retain, nonatomic) id<RPMessageable> messenger;

- (void)_activateWithCompletion:(id /* block */)a0;
- (id)initWithOptions:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)sendGCEvent:(struct RPHIDGCEvent { float x0; float x1; float x2; float x3; struct CGPoint { double x0; double x1; } x4; struct CGPoint { double x0; double x1; } x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; int x14; float x15; float x16; int x17; } *)a0 destinationID:(id)a1 completion:(id /* block */)a2;

@end
