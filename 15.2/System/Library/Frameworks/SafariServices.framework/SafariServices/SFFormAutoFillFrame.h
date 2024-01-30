@class NSString, WKWebProcessPlugInFrame;

@interface SFFormAutoFillFrame : NSObject <WBSFormAutoFillFrame>

@property (readonly, nonatomic) WKWebProcessPlugInFrame *plugInFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)autoFillFrameWithWebProcessPlugInFrame:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsAnyFormElements;
- (struct OpaqueFormAutoFillFrame { } *)frameRef;
- (id)committedURL;
- (struct OpaqueJSContext { } *)jsContextForMetadataControllerScriptWorld;
- (void)enumerateChildFramesUsingBlock:(id /* block */)a0;
- (id)pageMainFrame;
- (struct OpaqueJSValue { } *)jsWrapperInMetadataControllerScriptWorldForNode:(id)a0;
- (id)initWithWebProcessPlugInFrame:(id)a0;
- (id)_pageContoller;
- (id)_formMetadataController;

@end
