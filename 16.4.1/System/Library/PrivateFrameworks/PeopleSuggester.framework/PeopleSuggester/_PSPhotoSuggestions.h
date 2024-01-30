@interface _PSPhotoSuggestions : NSObject

+ (id)contactAndMDPersonIDsByAssetPresenceInAttachments:(id)a0 visualViewHandle:(id)a1;
+ (id)partitionPeopleSuggestionProxiesFromPhotosByAssetPresenceInAttachments:(id)a0 photoSuggestedPeople:(id)a1 contactIDsInAssets:(id)a2;
+ (id)photoSuggestedPeopleFromAttachments:(id)a0;
+ (id)suggestionTemplateForPhotoContactIdWithMessages:(id)a0 cdInteraction:(id)a1 reason:(id)a2 reasonType:(id)a3;

@end
