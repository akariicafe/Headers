@class NSArray, NSString, CPGridTemplate;

@interface CPSGridTemplateViewController : CPSBaseTemplateViewController <CPSButtonDelegate, CPGridTemplateProviding>

@property (retain, nonatomic) NSArray *gridButtons;
@property (readonly, nonatomic) CPGridTemplate *gridTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didSelectButton:(id)a0;
- (void)setControl:(id)a0 enabled:(BOOL)a1;
- (void)_viewDidLoad;
- (id)initWithGridTemplate:(id)a0 interfaceDelegate:(id)a1 templateEnvironment:(id)a2;
- (BOOL)_wantsNowPlayingButton;
- (id)_buttonForIdentifier:(id)a0;

@end
