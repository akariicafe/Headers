@class NSSet, NSMutableSet;

@interface HUCameraUsageOptionItemProvider : HFItemProvider

@property (readonly, nonatomic) NSMutableSet *items;
@property (readonly, nonatomic) unsigned long long presenceEventType;
@property (readonly, nonatomic) unsigned long long displayStyle;
@property (readonly, copy, nonatomic) NSSet *cameraProfiles;

- (void).cxx_destruct;
- (id)init;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithPresenceEventType:(unsigned long long)a0 cameraProfiles:(id)a1;

@end
