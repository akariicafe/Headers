@interface BRGetPausedFileListUpdater : NSObject <BRGetPausedFileListProtocol, NSSecureCoding> {
    id /* block */ _callback;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCallback:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updatePausedFileURL:(id)a0 reply:(id /* block */)a1;

@end
