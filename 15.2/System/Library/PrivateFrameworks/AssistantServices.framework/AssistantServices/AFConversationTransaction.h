@class NSArray;

@interface AFConversationTransaction : NSObject

@property (readonly, nonatomic) NSArray *updatedItemIndexPaths;
@property (readonly, nonatomic) NSArray *insertedItemIndexPaths;
@property (readonly, nonatomic) NSArray *presentationStateChangedItemIndexPaths;

- (id)initWithUpdatedItemIndexPaths:(id)a0 insertedItemIndexPaths:(id)a1 presentationStateChangedItemIndexPaths:(id)a2;
- (void).cxx_destruct;

@end
