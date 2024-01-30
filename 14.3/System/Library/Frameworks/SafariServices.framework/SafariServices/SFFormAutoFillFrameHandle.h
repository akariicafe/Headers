@class _WKFrameHandle, NSURL, NSString;

@interface SFFormAutoFillFrameHandle : NSObject <NSCopying, NSSecureCoding, WBUFormAutoFillFrameHandle> {
    NSURL *_URL;
    struct __SecTrust { } *_serverTrust;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _WKFrameHandle *frameHandle;
@property (readonly, nonatomic) NSURL *webui_URL;
@property (readonly, nonatomic) struct __SecTrust { } *webui_serverTrust;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithWebProcessPlugInFrame:(id)a0;
- (id)initWithFrameHandle:(id)a0 URL:(id)a1 serverTrust:(struct __SecTrust { } *)a2;
- (void)encodeWithCoder:(id)a0;

@end
