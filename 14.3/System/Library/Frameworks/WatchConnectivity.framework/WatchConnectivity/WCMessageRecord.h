@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface WCMessageRecord : NSObject

@property (readonly) BOOL expectsResponse;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) id /* block */ errorHandler;
@property (retain) NSObject<OS_dispatch_source> *timeoutTimer;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 errorHandler:(id /* block */)a1;

@end
