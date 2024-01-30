@class NSString;

@interface BLSHEnvironmentUpdateData : NSObject

@property (readonly, copy, nonatomic) NSString *environmentIdentifier;
@property (readonly, nonatomic) long long newBacklightState;
@property (readonly, nonatomic) unsigned long long pendingTransitionStateCount;
@property (readonly, nonatomic) unsigned long long timeStamp;

- (BOOL)isEqual:(id)a0;
- (id)initWithEnvironmentIdentifier:(id)a0 newBacklightState:(long long)a1 pendingTransitionStateCount:(unsigned long long)a2;
- (id)description;
- (void).cxx_destruct;

@end
