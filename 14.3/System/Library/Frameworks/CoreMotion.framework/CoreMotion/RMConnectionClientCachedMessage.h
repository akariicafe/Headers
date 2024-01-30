@class NSString, NSData;

@interface RMConnectionClientCachedMessage : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) id /* block */ streamingCallback;

- (id)initWithName:(id)a0 data:(id)a1 streamingCallback:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 data:(id)a1;

@end
