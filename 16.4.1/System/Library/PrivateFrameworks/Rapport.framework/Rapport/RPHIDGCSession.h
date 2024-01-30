@class NSDictionary, NSObject;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPHIDGCSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDictionary *_options;
}

@property (retain, nonatomic) id<RPMessageable> messenger;

- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void)_invalidate;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)sendGCEvent:(struct RPHIDGCEvent { float x0; float x1; float x2; float x3; struct CGPoint { double x0; double x1; } x4; struct CGPoint { double x0; double x1; } x5; float x6; float x7; float x8; float x9; float x10; float x11; int x12; float x13; float x14; int x15; char x16; char x17; char x18; char x19; char x20; char x21; } *)a0 destinationID:(id)a1 completion:(id /* block */)a2;

@end
