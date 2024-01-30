@interface WCDictionaryMessageRecord : WCMessageRecord

@property (readonly, copy) id /* block */ responseHandler;

- (id)description;
- (BOOL)expectsResponse;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 responseHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;

@end
