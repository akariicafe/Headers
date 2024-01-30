@class NSString;
@protocol WKConnectionDelegate;

@interface WKConnection : NSObject <WKObject> {
    struct WeakObjCPtr<id<WKConnectionDelegate> > { id m_weakReference; } _delegate;
}

@property id<WKConnectionDelegate> delegate;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (struct WebConnection { void /* function */ **x0; id x1; void /* function */ **x2; void /* function */ **x3; struct WebConnectionClient { struct WKConnectionClientV0 { struct WKConnectionClientBase { int x0; void *x1; } x0; void /* function */ *x1; void /* function */ *x2; } x0; } x4; } *)_connection;
- (void)sendMessageWithName:(id)a0 body:(id)a1;

@end
