@class NSArray, NSDictionary;
@protocol PVEffectTimedPropertiesDelegate;

@interface PVEffectTimedPropertiesDelegateWrapper : NSObject

@property (weak, nonatomic) id<PVEffectTimedPropertiesDelegate> timedPropertiesDelegate;
@property (retain, nonatomic) NSArray *supportedTimedPropertyGroups;
@property (retain, nonatomic) NSDictionary *userContext;
@property (nonatomic) BOOL wantsStartStopNotifications;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithTimedPropertiesDelegate:(id)a0 supportedTimedPropertyGroups:(id)a1 userContext:(id)a2;

@end
