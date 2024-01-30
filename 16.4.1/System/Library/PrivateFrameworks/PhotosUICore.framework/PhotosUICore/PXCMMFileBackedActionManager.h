@protocol PXCMMFileBackedActionPerformerDelegate;

@interface PXCMMFileBackedActionManager : PXCMMActionManager

@property (weak, nonatomic) id<PXCMMFileBackedActionPerformerDelegate> performerDelegate;

- (id)init;

@end
