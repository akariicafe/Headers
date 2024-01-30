@interface SwiftUI.PlatformDocument : UIDocument {
    void /* unknown type, empty encoding */ documentBox;
    void /* unknown type, empty encoding */ notificationObserver;
}

- (id)initWithFileURL:(id)a0;
- (BOOL)readFromURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)contentsForType:(id)a0 error:(id *)a1;

@end
