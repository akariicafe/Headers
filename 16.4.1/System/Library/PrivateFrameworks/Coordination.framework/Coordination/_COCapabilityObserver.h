@class NSString;

@interface _COCapabilityObserver : NSObject

@property (readonly, copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL notified;
@property (nonatomic) BOOL lastValue;
@property (readonly, copy, nonatomic) NSString *capability;
@property (readonly, copy, nonatomic) id cluster;

- (void)notify:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCapability:(id)a0 cluster:(id)a1 block:(id /* block */)a2;

@end
