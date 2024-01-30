@interface CKTUConversationViewUtilities : NSObject

+ (struct CGSize { double x0; double x1; })faceTimeIconSize;
+ (unsigned long long)ckTUConversationStateForTUConversation:(id)a0;
+ (id)activityTitleForTUConversation:(id)a0;
+ (id)joinStateStatusStringForTUConversation:(id)a0;
+ (id)activityTextForTUConversation:(id)a0;
+ (id)faceTimeIconForTUConversation:(id)a0;
+ (id)activityImageForTUConversation:(id)a0;
+ (id)activityIconForTUConversation:(id)a0 iconSize:(double)a1;
+ (BOOL)activityHasImageForTUConversation:(id)a0;
+ (id)activityDescriptionStringForTUConversation:(id)a0;
+ (id)activityBundleIdentifierForTUConversation:(id)a0;
+ (id)activityAppNameForTUConversation:(id)a0;
+ (id)sharePlayIcon;
+ (void)formatLPImageForScreenShare:(id)a0 conversation:(id)a1;

@end
