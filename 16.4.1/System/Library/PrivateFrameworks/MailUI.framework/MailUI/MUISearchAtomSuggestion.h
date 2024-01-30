@class UIColor, NSString, UIImage, NSDate;

@interface MUISearchAtomSuggestion : MUISearchSuggestion

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIColor *focusedTintColor;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSString *atomTitle;
@property (readonly, nonatomic) UIImage *atomImage;
@property (readonly, nonatomic) long long option;
@property (retain, nonatomic) NSDate *lastUsedTime;

+ (id)log;
+ (id)allMailboxesSuggestionFromSpotlightSuggestion:(id)a0;
+ (id)suggestionFromSpotlightSuggestion:(id)a0 shouldShowAvaters:(BOOL)a1;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)predicateWithSelectedScope:(id)a0;

@end
