@class NSObject;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPHIDSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) id<RPMessageable> messenger;

- (void)activateWithCompletion:(id /* block */)a0;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)hidCommand:(int)a0 buttonState:(int)a1 destinationID:(id)a2 completion:(id /* block */)a3;
- (void)hidCommand:(int)a0 destinationID:(id)a1 completion:(id /* block */)a2;

@end
