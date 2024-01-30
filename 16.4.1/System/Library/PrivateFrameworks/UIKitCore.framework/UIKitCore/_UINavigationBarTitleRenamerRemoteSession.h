@class NSString, NSURL, _UIOverlayService, _UIOServiceConnection;

@interface _UINavigationBarTitleRenamerRemoteSession : _UINavigationBarTitleRenamerSession <_UIOverlayServiceDelegate, _UIOServiceConnectionObserver, NSSecureCoding> {
    unsigned long long _currentState;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _UIOverlayService *overlayService;
@property (retain, nonatomic) _UIOServiceConnection *connection;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sessionDidEnd;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)overlayServiceDidInvalidate:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_server_cancelSessionAndNotify:(BOOL)a0;
- (void)serviceConnectionDidInvalidate:(id)a0;
- (void)_client_cancelSessionAndNotify:(BOOL)a0;
- (void)_client_sessionDidEnd;
- (void)_client_sessionDidStartInRenamer:(id)a0;
- (void)_client_textFieldDidEndEditingWithText:(id)a0;
- (BOOL)_client_textFieldShouldEndEditingWithText:(id)a0;
- (id)_client_willBeginRenamingWithText:(id)a0 selectedRange:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)_isServerSide;
- (void)_server_sessionDidEnd;
- (void)_server_sessionDidStartInRenamer:(id)a0;
- (void)_server_textFieldDidEndEditingWithText:(id)a0;
- (BOOL)_server_textFieldShouldEndEditingWithText:(id)a0;
- (id)_server_willBeginRenamingWithText:(id)a0 selectedRange:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)_textFieldDidEndEditingWithText:(id)a0;
- (BOOL)_textFieldShouldEndEditingWithText:(id)a0;
- (void)_updateSessionWithAction:(long long)a0;
- (id)_willBeginRenamingWithText:(id)a0 selectedRange:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)cancelSession;
- (void)cancelSessionAndNotify:(BOOL)a0;
- (id)createRenamerContentView;
- (id)initWithFileURL:(id)a0 iconMetadata:(id)a1;
- (id)initWithSuggestedTitle:(id)a0 iconMetadata:(id)a1;
- (void)sessionDidStartInRenamer:(id)a0;

@end
