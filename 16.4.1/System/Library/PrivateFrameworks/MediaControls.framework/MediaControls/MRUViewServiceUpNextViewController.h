@class UILabel, NSString, MPMediaControlsConfiguration;

@interface MRUViewServiceUpNextViewController : UIViewController <MRUViewServiceViewController>

@property (retain, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) MPMediaControlsConfiguration *configuration;
@property (copy, nonatomic) id /* block */ dismissalBlock;
@property (copy, nonatomic) id /* block */ customRowTappedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
