@class NSString, SGOrigin, NSURL, NSAttributedString;

@interface CNContactSuggestionViewControllerSGOriginDataSource : NSObject <CNContactSuggestionViewControllerDataSource>

@property (retain, nonatomic) SGOrigin *origin;
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

+ (id)dateFormatter;
+ (id)contactSuggestionTypeBySuggestionType;

- (void).cxx_destruct;
- (id)contactNameFromPerson:(id)a0;
- (id)initWithSGOrigin:(id)a0;

@end
