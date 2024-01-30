@class DAMailMessage;

@interface DADraftMessageRequest : DAMailboxRequest

@property (retain, nonatomic) DAMailMessage *message;
@property (nonatomic) BOOL send;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRequestType:(int)a0 message:(id)a1 send:(BOOL)a2;

@end
