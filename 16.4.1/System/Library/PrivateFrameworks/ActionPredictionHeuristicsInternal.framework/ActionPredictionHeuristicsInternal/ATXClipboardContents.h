@class PBServerConnection, ATXHeuristicDevice;

@interface ATXClipboardContents : NSObject {
    ATXHeuristicDevice *_device;
    PBServerConnection *_pasteboardServerConnection;
}

+ (void)_observeLocalPasteboard;

- (id)initWithDevice:(id)a0;
- (id)initWithDevice:(id)a0 pasteboardConnection:(id)a1;
- (void).cxx_destruct;
- (void)contentsWithCallback:(id /* block */)a0;

@end
