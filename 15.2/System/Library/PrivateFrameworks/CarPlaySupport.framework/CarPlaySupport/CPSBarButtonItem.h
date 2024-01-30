@class NSUUID, NSString, CPBarButton;
@protocol CPSButtonDelegate;

@interface CPSBarButtonItem : UIBarButtonItem <CPSButtonDelegate>

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) CPBarButton *barButton;
@property (weak, nonatomic) id<CPSButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)setImage:(id)a0;
- (void)didSelectButton:(id)a0;
- (id)initWithCPBarButton:(id)a0;
- (id)_initWithCPBarButton:(id)a0 showBackIndicator:(BOOL)a1;

@end
