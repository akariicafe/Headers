@class NSArray, NSDictionary;

@interface DNDSStateProviderSystemSnapshot : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSArray *assertions;
@property (readonly, copy, nonatomic) NSArray *activeAssertionUUIDs;
@property (readonly, copy, nonatomic) NSDictionary *activeDateIntervalByAssertionUUID;
@property (readonly, nonatomic) unsigned long long interruptionBehaviorSetting;
@property (readonly, nonatomic) unsigned long long lostModeState;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithSnapshot:(id)a0;
- (id)_initWithAssertions:(id)a0 activeAssertionUUIDs:(id)a1 activeDateIntervalByAssertionUUID:(id)a2 interruptionBehaviorSetting:(unsigned long long)a3 lostModeState:(unsigned long long)a4;

@end
