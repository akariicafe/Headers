@class NSString, PHSuggestion;

@interface PXExistingSuggestionsDebugCollectionItem : NSObject

@property (readonly) NSString *name;
@property (readonly) NSString *description;
@property (readonly) PHSuggestion *suggestion;

- (void).cxx_destruct;
- (id)initWithSuggestion:(id)a0;

@end
