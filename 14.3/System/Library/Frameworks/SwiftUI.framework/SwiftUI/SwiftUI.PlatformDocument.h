@interface SwiftUI.PlatformDocument : UIDocument {
    void /* unknown type, empty encoding */ documentBox;
    void /* unknown type, empty encoding */ notificationObserver;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFileURL:(id)a0;
- (id)contentsForType:(id)a0 error:(id *)a1;
- (BOOL)loadFromContents:(id)a0 ofType:(id)a1 error:(id *)a2;

@end
