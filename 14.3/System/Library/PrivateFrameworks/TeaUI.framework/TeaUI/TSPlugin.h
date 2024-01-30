@interface TSPlugin : NSObject <TUPluggableDelegate> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ layoutRevision;
    void /* unknown type, empty encoding */ layoutRevisionLock;
    void /* unknown type, empty encoding */ previousSize;
    void /* unknown type, empty encoding */ previousSizeLock;
}

- (void)pluggableViewController:(id)a0 didChangeSizeTo:(struct CGSize { double x0; double x1; })a1;
- (id)init;
- (void).cxx_destruct;
- (void)initializeWithCompletion:(id /* block */)a0;
- (void)relayoutWithCompletion:(id /* block */)a0;

@end
