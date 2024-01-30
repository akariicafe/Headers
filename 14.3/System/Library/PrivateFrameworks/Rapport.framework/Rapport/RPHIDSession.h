@class NSObject;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPHIDSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) id<RPMessageable> messenger;

- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void)hidCommand:(int)a0 destinationID:(id)a1 completion:(id /* block */)a2;
- (void)hidCommand:(int)a0 buttonState:(int)a1 destinationID:(id)a2 completion:(id /* block */)a3;

@end
