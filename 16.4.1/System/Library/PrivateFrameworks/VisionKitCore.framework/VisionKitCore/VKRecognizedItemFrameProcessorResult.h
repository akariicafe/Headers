@class NSArray;

@interface VKRecognizedItemFrameProcessorResult : VKFrameProcessorResult

@property (copy, nonatomic) NSArray *allItems;
@property (copy, nonatomic) NSArray *addedItems;
@property (copy, nonatomic) NSArray *updatedItems;
@property (copy, nonatomic) NSArray *removedItems;

- (id)init;
- (void).cxx_destruct;

@end
