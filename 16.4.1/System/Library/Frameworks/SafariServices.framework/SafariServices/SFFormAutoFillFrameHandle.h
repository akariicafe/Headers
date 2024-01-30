@class WBSGlobalFrameIdentifier, NSString, NSURL, _WKFrameHandle, NSNumber;

@interface SFFormAutoFillFrameHandle : NSObject <NSCopying, NSSecureCoding, WBUFormAutoFillFrameHandle> {
    NSURL *_URL;
    struct __SecTrust { } *_serverTrust;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _WKFrameHandle *frameHandle;
@property (readonly, nonatomic) NSNumber *pageID;
@property (readonly, nonatomic) WBSGlobalFrameIdentifier *webFrameIdentifier;
@property (readonly, nonatomic) NSURL *webui_URL;
@property (readonly, nonatomic) struct __SecTrust { } *webui_serverTrust;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrameHandle:(id)a0 URL:(id)a1 serverTrust:(struct __SecTrust { } *)a2 pageID:(id)a3;
- (id)initWithWebProcessPlugInFrame:(id)a0;

@end
