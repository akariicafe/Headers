@class NSDictionary, SFFormAutoFillFrameHandle, WBSFormMetadata;
@protocol _WKFormInputSession, _WKFocusedElementInfo;

@interface _SFFormAutoFillInputSession : NSObject

@property (readonly, nonatomic) id<_WKFocusedElementInfo> focusedElementInfo;
@property (readonly, nonatomic) NSDictionary *autoFillInputSessionUserObject;
@property (readonly, nonatomic) id<_WKFormInputSession> formInputSession;
@property (readonly, nonatomic) SFFormAutoFillFrameHandle *frameHandle;
@property (readonly, nonatomic) WBSFormMetadata *formMetadata;

- (void).cxx_destruct;
- (id)_initWithFormInputSession:(id)a0 focusedElement:(id)a1;
- (void)_updateAutoFillInputSessionUserObject:(id)a0;
- (id)autoFillInputSessionByReplacingInputSessionUserObject:(id)a0;
- (id)initWithFocusedElement:(id)a0;
- (id)initWithFormInputSession:(id)a0;

@end
