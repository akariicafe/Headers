@class NSString, NSSet;
@protocol _WKWebAuthenticationPanelDelegate;

@interface _WKWebAuthenticationPanel : NSObject <WKObject> {
    struct ObjectStorage<API::WebAuthenticationPanel> { struct type { unsigned char __lx[72]; } data; } _panel;
    struct WeakPtr<WebKit::WebAuthenticationPanelClient, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *m_ptr; } m_impl; } _client;
    struct RetainPtr<NSMutableSet> { void *m_ptr; } _transports;
}

@property (weak, nonatomic) id<_WKWebAuthenticationPanelDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *relyingPartyID;
@property (readonly, copy, nonatomic) NSSet *transports;
@property (readonly, nonatomic) long long type;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearAllLocalAuthenticatorCredentials;

@end
