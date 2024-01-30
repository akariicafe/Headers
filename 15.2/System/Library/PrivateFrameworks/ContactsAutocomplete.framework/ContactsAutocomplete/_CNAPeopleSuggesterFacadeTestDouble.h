@class NSString, NSMutableArray;
@protocol _CNAPeopleSuggesterFacadeTestDoubleDelegate;

@interface _CNAPeopleSuggesterFacadeTestDouble : NSObject <CNAPeopleSuggesterFacade> {
    NSMutableArray *_suggestions;
}

@property (readonly, weak) id<_CNAPeopleSuggesterFacadeTestDoubleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeRecipientWithDisplayName:(id)a0 handle:(id)a1 hasContact:(BOOL)a2;
+ (id)makeContactWithDisplayName:(id)a0 handle:(id)a1;
+ (id)makeContactWithDisplayName:(id)a0;
+ (id)personWithDisplayName:(id)a0 handle:(id)a1 hasContact:(BOOL)a2;
+ (id)makeRecipientWithDisplayName:(id)a0 handle:(id)a1;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)autocompleteSearchResultsWithPredictionContext:(id)a0;
- (id)addPerson:(id)a0;
- (void)addSuggestion:(id)a0;
- (id)addGroupWithDisplayName:(id)a0 conversationIdentifier:(id)a1 recipients:(id)a2;

@end
