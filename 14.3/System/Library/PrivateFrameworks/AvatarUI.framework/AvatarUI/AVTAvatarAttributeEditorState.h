@class NSMutableDictionary;

@interface AVTAvatarAttributeEditorState : NSObject

@property (retain, nonatomic) NSMutableDictionary *pairedStates;

+ (id)buildStateFromCoreModel:(id)a0 avatarConfiguration:(id)a1;

- (id)init;
- (void)setCategory:(long long)a0 inPairedState:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithPairedStates:(id)a0;
- (BOOL)isCategoryPaired:(long long)a0;

@end
