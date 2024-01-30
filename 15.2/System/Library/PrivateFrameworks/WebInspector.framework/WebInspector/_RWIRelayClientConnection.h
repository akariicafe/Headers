@class NSString;
@protocol _RWIRelayClientConnectionDelegate;

@interface _RWIRelayClientConnection : NSObject <_RWIRelayToClientMessageProxy> {
    BOOL _closed;
}

@property (readonly, nonatomic) id<_RWIRelayClientConnectionDelegate> delegate;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) BOOL sleeping;

- (id)initWithDelegate:(id)a0;
- (void)sendMessage:(id)a0;
- (void)close;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (void)closeInternal;
- (void)_closeAndNotifyDelegate:(BOOL)a0;
- (void)closeFromConnection;
- (void)dispatchRelayMessage:(id)a0;

@end
