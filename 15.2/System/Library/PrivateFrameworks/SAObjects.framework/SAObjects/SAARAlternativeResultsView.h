@class NSString, SAUIAddViews;

@interface SAARAlternativeResultsView : SAAceView

@property (copy, nonatomic) NSString *dialogIdentifier;
@property (nonatomic) long long rank;
@property (retain, nonatomic) SAUIAddViews *resultView;
@property (nonatomic) BOOL suggestedResult;
@property (copy, nonatomic) NSString *utterance;

+ (id)alternativeResultsView;
+ (id)alternativeResultsViewWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
