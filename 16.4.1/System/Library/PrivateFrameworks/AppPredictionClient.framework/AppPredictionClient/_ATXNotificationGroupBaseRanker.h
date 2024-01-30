@class NSString;

@interface _ATXNotificationGroupBaseRanker : NSObject <ATXNotificationGroupRankerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rankerId;

- (id)_initialGroupComparisonValue:(id)a0;
- (long long)compareGroups:(id)a0 group2:(id)a1;
- (id)rankNotificationGroups:(id)a0 modeId:(id)a1;

@end
