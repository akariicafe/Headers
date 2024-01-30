@class CNMutableContact, NSString, CNContact, UIColor;
@protocol CNContactActionDelegate;

@interface CNContactAction : NSObject

@property (weak, nonatomic) id<CNContactActionDelegate> delegate;
@property (retain, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNMutableContact *mutableContact;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (nonatomic, getter=isDestructive) BOOL destructive;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *glyphColor;
@property (nonatomic) long long transportType;
@property (nonatomic) BOOL showBackgroundPlatter;
@property (nonatomic) BOOL wrapTitle;
@property (readonly, nonatomic) BOOL canPerformAction;

+ (id)contactActionWithTitle:(id)a0 target:(id)a1 selector:(SEL)a2;
+ (id)contactActionWithTitle:(id)a0 target:(id)a1 selector:(SEL)a2 destructive:(BOOL)a3;

- (id)initWithContact:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)performActionWithSender:(id)a0;
- (id)description;
- (id)initWithTitle:(id)a0 target:(id)a1 selector:(SEL)a2 destructive:(BOOL)a3;

@end
