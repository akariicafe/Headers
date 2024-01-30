@interface LAWeakBox : NSObject {
    id _receiver;
}

- (id)forwardingTargetForSelector:(SEL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithReceiver:(id)a0;

@end
