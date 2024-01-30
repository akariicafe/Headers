@class NSDictionary, NSString, NSMutableDictionary;

@interface IKPlayerStateChangeEventUserInfo : NSObject <IKPlayerEventMarshaling> {
    NSMutableDictionary *_mutableProperties;
}

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long oldState;
@property (nonatomic) double duration;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double rate;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)stateForStateName:(id)a0;
+ (id)stateNameForState:(long long)a0;

- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithState:(long long)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (id)initWithState:(long long)a0 oldState:(long long)a1;

@end
