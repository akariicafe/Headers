@class NSString, CDMServiceGraph;

@interface CDMBaseRequestHandler : NSObject {
    unsigned long long _handlerState;
    CDMServiceGraph *_serviceGraph;
    id _result;
}

@property (readonly, nonatomic) NSString *handlerId;

- (void).cxx_destruct;
- (id)init;
- (id)initWithId:(id)a0 serviceGraph:(id)a1;
- (id)getServiceGraph;
- (void)setHandlerState:(unsigned long long)a0;
- (unsigned long long)getHandlerState;
- (id)getError;
- (id)getResult;

@end
