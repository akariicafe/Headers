@class UISPasteSharingToken;

@interface PBLoadRequestContext : NSObject <NSSecureCoding> {
    unsigned int _options;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) UISPasteSharingToken *pasteSharingToken;
@property (readonly, getter=isFromUIFramework) BOOL fromUIFramework;
@property (readonly, getter=isBlockingMainThread) BOOL blockingMainThread;
@property (readonly) BOOL clientHasFinishedLaunching;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned int)a0 pasteSharingToken:(id)a1;

@end
