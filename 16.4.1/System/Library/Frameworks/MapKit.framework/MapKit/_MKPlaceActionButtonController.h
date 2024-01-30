@class NSString;
@protocol _MKPlaceActionControlledButton;

@interface _MKPlaceActionButtonController : NSObject <_MKInfoCardChildViewControllerAnalyticsDelegate>

@property (weak, nonatomic) id<_MKPlaceActionControlledButton> delegate;
@property (readonly, nonatomic) NSString *buttonTitle;
@property (readonly, nonatomic) NSString *buttonSubTitle;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) id /* block */ buttonSelectedBlock;
@property (readonly, nonatomic) BOOL disabled;
@property (readonly, nonatomic) int analyticsAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionButtonControllerWithTitle:(id)a0 subTitle:(id)a1 selectedBlock:(id /* block */)a2;
+ (id)actionButtonControllerWithTitle:(id)a0 subTitle:(id)a1 selectedBlock:(id /* block */)a2 disabled:(BOOL)a3 symbolName:(id)a4;

- (void).cxx_destruct;
- (void)buttonTextChanged;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithTitle:(id)a0 subTitle:(id)a1 analyticsAction:(int)a2 selectedBlock:(id /* block */)a3 disabled:(BOOL)a4 symbolName:(id)a5;
- (id)initWithTitle:(id)a0 subTitle:(id)a1 selectedBlock:(id /* block */)a2;

@end
