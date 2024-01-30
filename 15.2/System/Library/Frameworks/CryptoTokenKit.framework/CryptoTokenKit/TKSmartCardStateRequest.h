@interface TKSmartCardStateRequest : NSObject

@property long long stateWhenRequested;
@property (copy) id /* block */ reply;

- (void).cxx_destruct;

@end
