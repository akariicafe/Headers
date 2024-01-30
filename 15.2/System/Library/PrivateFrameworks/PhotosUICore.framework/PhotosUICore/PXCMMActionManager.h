@class NSMutableDictionary;
@protocol PXCMMActionPerformerDelegate;

@interface PXCMMActionManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *performerClassByType;
@property (weak, nonatomic) id<PXCMMActionPerformerDelegate> performerDelegate;

- (id)actionPerformerForActionType:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (Class)actionPerformerClassForActionType:(id)a0;
- (id)publishActionPerformer;
- (id)messageComposeActionPerformer;
- (id)photosPickerActionPerformer;
- (id)sendBackActionPerformer;

@end
