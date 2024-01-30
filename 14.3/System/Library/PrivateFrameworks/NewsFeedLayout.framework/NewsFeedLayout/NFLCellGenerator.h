@class NFLAbstractRanker, NFLAbstractCellPropertyProvider, NFLAbstractCellSizer;

@interface NFLCellGenerator : NSObject

@property (nonatomic) Class headlineTemplateClass;
@property (readonly, nonatomic) NFLAbstractRanker *ranker;
@property (readonly, nonatomic) NFLAbstractCellSizer *sizer;
@property (readonly, nonatomic) NFLAbstractCellPropertyProvider *propertyProvider;

- (void).cxx_destruct;
- (id)initWithSizer:(id)a0 ranker:(id)a1 propertyProvider:(id)a2;
- (id)rankedLayoutsForTileInfo:(id)a0 feedTemplate:(id)a1 columnSpan:(unsigned long long)a2 showAccessoryText:(BOOL)a3;

@end
