@class HMHome;

@interface HFPresenceEventFormatter : NSFormatter

@property (nonatomic) unsigned long long nameType;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) HMHome *home;

- (id)initWithOptions:(id)a0;
- (id)stringForPresenceEventBuilder:(id)a0 actionsDescription:(id)a1;
- (id)_formattedListForSelectedUsers:(id)a0 inHome:(id)a1;
- (id)stringForPresenceEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)stringForPresenceEventBuilder:(id)a0;

@end
