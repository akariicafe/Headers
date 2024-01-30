@class NSString;

@interface PXAssistantListViewItem : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long tag;
@property (readonly, nonatomic) id representedObject;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, copy, nonatomic) NSString *detail;
@property (readonly, nonatomic) BOOL selected;
@property (readonly, nonatomic) BOOL enabled;

+ (id)itemWithTitle:(id)a0;
+ (id)itemWithTag:(long long)a0 title:(id)a1 enabled:(BOOL)a2;
+ (id)navigationItemWithTag:(long long)a0 title:(id)a1 subtitle:(id)a2 enabled:(BOOL)a3;
+ (id)ruleItemWithTag:(long long)a0 title:(id)a1 subtitle:(id)a2 detail:(id)a3 systemImageName:(id)a4 enabled:(BOOL)a5;
+ (id)selectionItemWithTag:(long long)a0 title:(id)a1 subtitle:(id)a2 selected:(BOOL)a3 enabled:(BOOL)a4;

- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 tag:(long long)a1 representedObject:(id)a2 title:(id)a3 subtitle:(id)a4 detail:(id)a5 systemImageName:(id)a6 selected:(BOOL)a7 enabled:(BOOL)a8;

@end
