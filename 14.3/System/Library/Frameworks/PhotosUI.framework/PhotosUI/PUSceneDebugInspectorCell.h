@class NSString, UILabel, PUSceneDebugInspectorSceneViewModel;

@interface PUSceneDebugInspectorCell : UITableViewCell

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) UILabel *keywordLabel;
@property (retain, nonatomic) UILabel *synonymsLabel;
@property (retain, nonatomic) UILabel *sceneIdentifierLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *isIndexedLabel;
@property (retain, nonatomic) UILabel *thresholdLabel;
@property (retain, nonatomic) UILabel *coverageLabel;
@property (retain, nonatomic) PUSceneDebugInspectorSceneViewModel *viewModel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
