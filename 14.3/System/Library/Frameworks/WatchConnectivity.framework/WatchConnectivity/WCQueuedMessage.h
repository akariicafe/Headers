@class WCMessage, NSDate;

@interface WCQueuedMessage : NSObject

@property (retain) WCMessage *message;
@property (copy) id /* block */ completionHandler;
@property (readonly) NSDate *creationDate;
@property long long retryCount;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)description;
- (id)initWithMessage:(id)a0 completionHandler:(id /* block */)a1;

@end
