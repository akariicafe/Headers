@class NSString, NSArray, CNContact, NSMutableArray;

@interface CNCardGroup : NSObject <NSCopying> {
    NSMutableArray *_items;
    NSArray *_actionItems;
}

@property (retain, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *actionItems;
@property (readonly, nonatomic) NSArray *displayItems;
@property (readonly, nonatomic) NSArray *editingItems;
@property (readonly, nonatomic) NSMutableArray *actions;
@property (nonatomic) BOOL useSplitActions;
@property (nonatomic) BOOL addSpacerFromPreviousGroup;

+ (id)groupForContact:(id)a0;

- (id)initWithContact:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllActions;
- (void)addAction:(id)a0 withTitle:(id)a1;
- (id)_loadActionItems;
- (void)addAction:(id)a0 withTitle:(id)a1 wrapTitle:(BOOL)a2;
- (id)addActionWithTitle:(id)a0 target:(id)a1 selector:(SEL)a2 destructive:(BOOL)a3;
- (id)addActionWithTitle:(id)a0 target:(id)a1 selector:(SEL)a2;
- (void)addAction:(id)a0 withTitle:(id)a1 color:(id)a2 transportType:(long long)a3;
- (void)addAction:(id)a0 withTitle:(id)a1 color:(id)a2 glyphColor:(id)a3 transportType:(long long)a4;
- (id)unwrappedTargetForAction:(id)a0;
- (void)removeActionWithTarget:(id)a0 selector:(SEL)a1;
- (SEL)unwrappedSelectorForAction:(id)a0;
- (void)removeActionWithTitle:(id)a0;
- (id)description;

@end
