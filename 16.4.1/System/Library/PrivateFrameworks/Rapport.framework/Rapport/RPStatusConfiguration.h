@class NSString;

@interface RPStatusConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *statusID;
@property (readonly, nonatomic) double leeway;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (id)initWithStatusID:(id)a0 leeway:(double)a1 configurationFlags:(unsigned long long)a2 statusUpdateHandler:(id /* block */)a3;

@end
