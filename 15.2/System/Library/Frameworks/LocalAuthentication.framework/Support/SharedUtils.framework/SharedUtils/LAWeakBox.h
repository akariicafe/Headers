@interface LAWeakBox : NSObject {
    id _receiver;
}

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithReceiver:(id)a0;

@end
