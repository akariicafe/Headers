@class CNGroup, NSString, NSArray, UIImage;

@interface CNAccountsAndGroupsItem : NSObject <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) id /* block */ nameProvider;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) CNGroup *group;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (nonatomic) long long containerType;
@property (nonatomic) long long contactCount;
@property (readonly, nonatomic) NSString *contactCountString;
@property (retain, nonatomic) NSArray *childItems;
@property (weak, nonatomic) CNAccountsAndGroupsItem *parentItem;
@property (readonly, nonatomic) UIImage *groupSymbol;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL bypassIfUnique;
@property (nonatomic) BOOL shouldHide;
@property (nonatomic) BOOL soloSelect;
@property (readonly, nonatomic) BOOL isEditable;
@property (readonly, nonatomic) BOOL acceptsVCardDrop;
@property (readonly, nonatomic) BOOL canShowContextMenu;
@property (readonly, nonatomic) BOOL canEmail;
@property (readonly, nonatomic) BOOL canMessage;
@property (readonly, nonatomic) BOOL canExport;
@property (readonly, nonatomic) BOOL canRename;
@property (readonly, nonatomic) BOOL canDelete;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)localizedCompare:(id)a0;
- (id)arrayForDisplay:(BOOL)a0;
- (id)initWithType:(long long)a0 nameProvider:(id /* block */)a1;
- (void)setSelected:(BOOL)a0 affectingChildren:(BOOL)a1;

@end
