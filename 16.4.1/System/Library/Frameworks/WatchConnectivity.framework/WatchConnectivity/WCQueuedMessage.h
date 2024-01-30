@class WCMessage, NSDate;

@interface WCQueuedMessage : NSObject

@property (retain) WCMessage *message;
@property (copy) id /* block */ completionHandler;
@property (readonly) NSDate *creationDate;
@property long long retryCount;

- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 completionHandler:(id /* block */)a1;

@end
