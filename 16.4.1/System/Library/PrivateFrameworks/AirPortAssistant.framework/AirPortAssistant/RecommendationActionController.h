@class NSString, TableViewManager;

@interface RecommendationActionController : NSObject

@property (retain, nonatomic) NSString *sectionIdentifier;
@property (retain, nonatomic) NSString *actionKey;
@property (nonatomic) TableViewManager *tableManager;

+ (id)recommendationActionControllerWithTableManager:(id)a0 andAssistantUIViewController:(id)a1;

- (id)getSectionInfoWithLongStrings:(BOOL)a0;
- (BOOL)isPrimaryRecommendation;
- (void)selectPrimaryRecommendation;

@end
