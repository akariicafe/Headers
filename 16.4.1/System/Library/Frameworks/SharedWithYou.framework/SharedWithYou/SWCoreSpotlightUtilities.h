@interface SWCoreSpotlightUtilities : NSObject

+ (id)CSQueryStringForAutodonatingChatsWithDecay:(BOOL)a0;
+ (id)CSSearchQueryContextForAutodonatingChats;
+ (id)CSQueryStringForSLHighlightsForContentType:(unsigned char)a0 forChatIdentifiers:(id)a1;
+ (id)CSSearchQueryContextForSLHighlightsForContentType:(unsigned char)a0;
+ (id)fetchCSSearchableItemForUniqueIdentifier:(id)a0 forContentType:(unsigned char)a1 withRequiredAttributes:(id)a2 error:(id *)a3;
+ (id)requiredSpotlightAttributeKeysForFiles;
+ (id)requiredSpotlightAttributeKeysForLinks;

@end
