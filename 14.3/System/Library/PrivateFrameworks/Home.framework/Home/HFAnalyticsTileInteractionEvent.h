@class NSString;

@interface HFAnalyticsTileInteractionEvent : HFAnalyticsEvent

@property (nonatomic) unsigned long long interactionType;
@property (nonatomic) BOOL isRoomDashboard;
@property (nonatomic) BOOL isActionSetItem;
@property (nonatomic) BOOL isCameraItem;
@property (nonatomic) BOOL isServiceLikeItem;
@property (nonatomic) BOOL isStatusItem;
@property (retain, nonatomic) NSString *itemClassName;
@property (nonatomic) long long itemPrimaryState;
@property (nonatomic) long long itemPriority;
@property (nonatomic) unsigned long long numberOfRepresentedHomeKitObjects;
@property (retain, nonatomic) NSString *processName;
@property (retain, nonatomic) NSString *sourceViewControllerClassName;

+ (unsigned long long)_numberOfRepresentedHomeKitObjectsForItem:(id)a0;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
