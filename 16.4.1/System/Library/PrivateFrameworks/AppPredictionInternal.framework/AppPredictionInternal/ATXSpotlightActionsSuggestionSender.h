@class NSString, NSDictionary;

@interface ATXSpotlightActionsSuggestionSender : NSObject {
    NSString *_previousOngoingCallIdentifier;
    NSString *_previousNowPlayingIdentifier;
    NSDictionary *_previousDirectionsIdentifiers;
}

+ (id)identifierForOngoingCallSuggestionFromLayout:(id)a0;
+ (id)identifierForNowPlayingSuggestionFromLayout:(id)a0;
+ (id)identifiersForDirectionsSuggestionFromLayout:(id)a0;

- (id)init;
- (void)blendingLayerDidUpdateSpotlightUICache:(id)a0;
- (void).cxx_destruct;

@end
