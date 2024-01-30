@class NSString, BBDismissalItem;

@interface BBDismissalSyncBulletinMatch : NSObject

@property (copy, nonatomic) NSString *sectionID;
@property (retain, nonatomic) BBDismissalItem *dismissalItem;
@property (copy, nonatomic) NSString *dismissalID;
@property (nonatomic) unsigned long long feeds;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDismissalID:(id)a0 andItem:(id)a1;
- (id)initWithDismissalDictionaryItem:(id)a0;

@end
