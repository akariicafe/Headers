@class NSMutableDictionary, NSMutableSet;

@interface FMObservingCell : UITableViewCell

@property (retain, nonatomic) NSMutableDictionary *kvoObservationTokens;
@property (retain, nonatomic) NSMutableSet *notificationTokens;
@property (weak, nonatomic) id representedObject;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)removeKVOObservationTokens;
- (void)removeNotificationTokens;
- (void)addObserversForRepresentedObject:(id)a0;
- (void)addKVOObservationToken:(id)a0 forObject:(id)a1;
- (void)addNotificationToken:(id)a0;

@end
