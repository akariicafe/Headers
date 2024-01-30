@interface SLGuaranteedRemoteCall : NSObject

@property (copy) id /* block */ block;
@property (retain) id proxy;

- (void).cxx_destruct;

@end
