@class NSArray, NSDictionary, NSDate;

@interface DNDSStateProviderSystemSnapshot : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSArray *assertions;
@property (readonly, copy, nonatomic) NSArray *activeAssertionUUIDs;
@property (readonly, copy, nonatomic) NSDictionary *activeDateIntervalByAssertionUUID;
@property (readonly, nonatomic) unsigned long long interruptionBehaviorSetting;
@property (readonly, nonatomic) unsigned long long lostModeState;
@property (readonly, copy, nonatomic) NSDate *lastUpdate;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)_initWithSnapshot:(id)a0;
- (id)_initWithAssertions:(id)a0 activeAssertionUUIDs:(id)a1 activeDateIntervalByAssertionUUID:(id)a2 interruptionBehaviorSetting:(unsigned long long)a3 lostModeState:(unsigned long long)a4 lastUpdate:(id)a5;

@end
