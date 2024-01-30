@class TKSmartCard;

@interface TKSmartCardTokenSession : TKTokenSession {
    TKSmartCard *_smartCard;
    BOOL _hasSession;
    TKSmartCard *_errorCard;
}

@property (readonly) TKSmartCard *smartCard;

- (id)initWithToken:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (void)endRequest;
- (void)beginRequest;

@end
