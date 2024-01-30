@class NSString, NSAttributedString, UIImage;

@interface UISearchSuggestionItem : NSObject <UISearchSuggestion>

@property (readonly, nonatomic) NSAttributedString *localizedAttributedSuggestion;
@property (readonly, nonatomic) NSString *localizedSuggestion;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) id representedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suggestionWithLocalizedAttributedSuggestion:(id)a0;
+ (id)suggestionWithLocalizedAttributedSuggestion:(id)a0 descriptionString:(id)a1;
+ (id)suggestionWithLocalizedAttributedSuggestion:(id)a0 descriptionString:(id)a1 iconImage:(id)a2;
+ (id)suggestionWithLocalizedSuggestion:(id)a0;
+ (id)suggestionWithLocalizedSuggestion:(id)a0 descriptionString:(id)a1;
+ (id)suggestionWithLocalizedSuggestion:(id)a0 descriptionString:(id)a1 iconImage:(id)a2;

- (void).cxx_destruct;
- (id)initWithLocalizedAttributedSuggestion:(id)a0;
- (id)initWithLocalizedAttributedSuggestion:(id)a0 localizedDescription:(id)a1;
- (id)initWithLocalizedAttributedSuggestion:(id)a0 localizedDescription:(id)a1 iconImage:(id)a2;
- (id)initWithLocalizedSuggestion:(id)a0;
- (id)initWithLocalizedSuggestion:(id)a0 localizedDescription:(id)a1;
- (id)initWithLocalizedSuggestion:(id)a0 localizedDescription:(id)a1 iconImage:(id)a2;

@end
