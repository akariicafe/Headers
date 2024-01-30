@class NSMutableDictionary;
@protocol PXCMMActionPerformerDelegate;

@interface PXCMMActionManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *performerClassByType;
@property (weak, nonatomic) id<PXCMMActionPerformerDelegate> performerDelegate;

- (id)init;
- (void).cxx_destruct;
- (Class)actionPerformerClassForActionType:(id)a0;
- (id)publishActionPerformer;
- (id)messageComposeActionPerformer;
- (id)photosPickerActionPerformer;
- (id)sendBackActionPerformer;
- (id)actionPerformerForActionType:(id)a0;

@end
