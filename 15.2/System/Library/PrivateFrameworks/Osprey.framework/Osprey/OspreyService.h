@protocol OspreyRPC;

@interface OspreyService : NSObject

@property (readonly, nonatomic) id<OspreyRPC> channel;

- (void).cxx_destruct;
- (id)initWithConnectionConfiguration:(id)a0;
- (id)initWithConnectionURL:(id)a0;

@end
