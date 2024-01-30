@class NSError, NSMutableSet;

@interface HAP2AccessoryServerBrowserOperation : HAP2LoggingObject

@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) NSMutableSet *pendingCoordinators;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;

@end
