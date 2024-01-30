@interface BMStreamSyncPlatformPolicy : NSObject

@property (readonly, nonatomic) unsigned long long transportType;
@property (readonly, nonatomic) unsigned long long direction;

- (id)initWithTransportType:(unsigned long long)a0 direction:(unsigned long long)a1;

@end
