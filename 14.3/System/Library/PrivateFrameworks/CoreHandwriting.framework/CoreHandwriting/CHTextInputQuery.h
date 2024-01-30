@class NSArray;
@protocol CHTextInputQueryTargetDataSource;

@interface CHTextInputQuery : CHQuery

@property (copy, nonatomic, setter=_setAvailableItems:) NSArray *availableItems;
@property (nonatomic) double totalDuration;
@property id<CHTextInputQueryTargetDataSource> textInputTargetsDataSource;

+ (id)queryItemStableIdentifierForStrokeGroup:(id)a0;

- (void)dealloc;
- (id)debugName;
- (id)initWithRecognitionSession:(id)a0;
- (void)q_updateQueryResult;
- (id)q_textInputItemsFromSessionResult:(id)a0;

@end
