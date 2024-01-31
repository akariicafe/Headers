@class NSString, CNLabeledValue, NSURL, NSAttributedString;

@interface CNContactSuggestionViewControllerLabeledValueDataSource : NSObject <CNContactSuggestionViewControllerDataSource>

@property (retain, nonatomic) CNLabeledValue *labeledValue;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSAttributedString *formattedSnippet;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *date;
@property (readonly, nonatomic) NSString *with;
@property (readonly, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLabeledValue:(id)a0;

@end
