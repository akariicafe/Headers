@class NSLock, HKHealthService;

@interface HKHealthServiceSession : NSObject

@property (retain, nonatomic) NSLock *propertyLock;
@property (nonatomic) unsigned long long sessionIdentifier;
@property (copy, nonatomic) id /* block */ sessionHandler;
@property (copy, nonatomic) id /* block */ characteristicsHandler;
@property (readonly, nonatomic) HKHealthService *service;

- (void).cxx_destruct;
- (id)initWithService:(id)a0;

@end
