@class NSString, NSDiffableDataSourceSnapshot;
@protocol NSCollectionLayoutEnvironment;

@interface SHSheetContentLayoutContext : NSObject

@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *dataSourceSnapshot;
@property (readonly, nonatomic) id<NSCollectionLayoutEnvironment> environment;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } viewDirectionalLayoutMargins;
@property (nonatomic) BOOL enableHeroActions;
@property (nonatomic) BOOL enableTopContentSectionText;

- (void).cxx_destruct;
- (id)initWithSectionIdentifier:(id)a0 dataSourceSnapshot:(id)a1 environment:(id)a2;

@end
