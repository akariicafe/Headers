@class NSArray;
@protocol CHTextInputQueryTargetDataSource;

@interface CHTextInputQuery : CHQuery

@property (copy, nonatomic, setter=_setAvailableItems:) NSArray *availableItems;
@property (nonatomic) double totalDuration;
@property (weak) id<CHTextInputQueryTargetDataSource> textInputTargetsDataSource;

+ (id)queryItemStableIdentifierForStrokeGroup:(id)a0;

- (id)debugName;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithRecognitionSession:(id)a0;
- (id)q_textInputItemsFromSessionResult:(id)a0;
- (void)q_updateQueryResult;

@end
