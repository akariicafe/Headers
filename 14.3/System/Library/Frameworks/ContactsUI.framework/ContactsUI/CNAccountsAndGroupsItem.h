@class NSString, NSArray;

@interface CNAccountsAndGroupsItem : NSObject

@property (retain, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) id /* block */ nameProvider;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long containerType;
@property (retain, nonatomic) NSArray *childItems;
@property (weak, nonatomic) CNAccountsAndGroupsItem *parentItem;
@property (nonatomic) BOOL bypassIfUnique;
@property (nonatomic) BOOL soloSelect;
@property (readonly, nonatomic) long long type;
@property (nonatomic, getter=isSelected) BOOL selected;

- (void)_setSelected:(BOOL)a0 affectingChildren:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 nameProvider:(id /* block */)a1;
- (id)arrayForDisplay:(BOOL)a0;
- (long long)localizedCompare:(id)a0;

@end
