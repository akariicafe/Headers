@interface SwiftUI.PlatformDocument : UIDocument {
    void /* unknown type, empty encoding */ documentBox;
    void /* unknown type, empty encoding */ notificationObserver;
}

- (id)initWithFileURL:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)contentsForType:(id)a0 error:(id *)a1;
- (BOOL)readFromURL:(id)a0 error:(id *)a1;

@end
