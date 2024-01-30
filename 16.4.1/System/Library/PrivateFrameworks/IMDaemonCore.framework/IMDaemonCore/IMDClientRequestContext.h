@class NSString;
@protocol IMDaemonListenerProtocol;

@interface IMDClientRequestContext : NSObject

@property (class, retain, nonatomic) IMDClientRequestContext *currentContext;

@property (readonly, copy, nonatomic) NSString *listenerID;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) id<IMDaemonListenerProtocol> replyProxy;

- (id)initWithListenerID:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 capabilities:(unsigned long long)a2 replyProxy:(id)a3;
- (void).cxx_destruct;

@end
