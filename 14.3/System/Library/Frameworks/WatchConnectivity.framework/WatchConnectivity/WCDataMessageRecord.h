@interface WCDataMessageRecord : WCMessageRecord

@property (readonly, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)description;
- (BOOL)expectsResponse;
- (id)initWithIdentifier:(id)a0 responseHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;

@end
