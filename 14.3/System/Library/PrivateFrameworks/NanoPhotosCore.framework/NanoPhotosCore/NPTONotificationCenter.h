@class NSString;

@interface NPTONotificationCenter : NSObject {
    NSString *_devicePairingID;
}

- (id)initWithDevice:(id)a0;
- (void)postNotificationName:(id)a0;
- (void).cxx_destruct;
- (id)observerForName:(id)a0 queue:(id)a1 block:(id /* block */)a2;

@end
