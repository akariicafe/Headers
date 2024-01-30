@class NSString, REMListBadge, REMAccount, REMList, REMSmartList, REMColor;

@interface REMSmartListCustomContext : NSObject

@property (retain, nonatomic) REMSmartList *smartlist;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) REMColor *color;
@property (readonly, nonatomic) REMListBadge *badge;
@property (readonly, nonatomic) REMAccount *account;
@property (readonly, nonatomic) REMList *parentList;

- (void).cxx_destruct;
- (id)initWithSmartList:(id)a0 account:(id)a1 parentList:(id)a2;

@end
