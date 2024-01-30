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

+ (id)makeContactWithDisplayName:(id)a0;
+ (id)makeContactWithDisplayName:(id)a0 handle:(id)a1;
+ (id)makeRecipientWithDisplayName:(id)a0 handle:(id)a1;
+ (id)makeRecipientWithDisplayName:(id)a0 handle:(id)a1 hasContact:(BOOL)a2;
+ (id)personWithDisplayName:(id)a0 handle:(id)a1 hasContact:(BOOL)a2;

- (id)autocompleteSearchResultsWithPredictionContext:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addSuggestion:(id)a0;
- (id)addPerson:(id)a0;
- (id)addGroupWithDisplayName:(id)a0 conversationIdentifier:(id)a1 recipients:(id)a2;

@end
