@class NSSet, NSMutableSet, REMReminderChangeItem;

@interface REMReminderHashtagContextChangeItem : NSObject

@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem;
@property (retain, nonatomic) NSMutableSet *mutableHashtags;
@property (readonly, nonatomic) NSSet *hashtags;

- (void).cxx_destruct;
- (void)removeAllHashtags;
- (void)addHashtag:(id)a0;
- (id)initWithReminderChangeItem:(id)a0;
- (id)addHashtagWithType:(long long)a0 name:(id)a1;
- (void)removeHashtag:(id)a0;
- (void)undeleteHashtagWithID:(id)a0;
- (void)cancelUndeleteHashtagWithID:(id)a0;

@end
