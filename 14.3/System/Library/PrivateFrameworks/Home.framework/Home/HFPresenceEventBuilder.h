@class NSString, HFSelectedUserCollection;

@interface HFPresenceEventBuilder : HFEventBuilder <HFLocationEventBuilder>

@property (retain, nonatomic) HFSelectedUserCollection *users;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) unsigned long long activationGranularity;
@property (readonly, nonatomic) unsigned long long presenceEventType;
@property (readonly, nonatomic) unsigned long long presenceUserType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_selectedUsersForPresenceEvent:(id)a0;

@end
