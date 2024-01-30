@class NSString, ICStoreDialogResponseButtonAction;

@interface ICStoreDialogResponseButton : NSObject <NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isDefaultButton;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) ICStoreDialogResponseButtonAction *action;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 isDefaultButton:(BOOL)a1 title:(id)a2 action:(id)a3;

@end
