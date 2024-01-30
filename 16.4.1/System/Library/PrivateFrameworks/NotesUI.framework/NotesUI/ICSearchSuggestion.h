@class NSArray, NSString, UIImage, _UISearchSuggestionItem_dci;

@interface ICSearchSuggestion : NSObject <NSCopying>

@property (class, readonly, nonatomic) NSArray *orderedSearchSuggestions;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *suggestionItemTitle;
@property (readonly, nonatomic) NSString *tokenTitle;
@property (readonly, nonatomic) NSString *subQueryString;
@property (readonly, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) _UISearchSuggestionItem_dci *dciSuggestion;

+ (unsigned long long)suggestionTypeOfFirstItemInSuggestions:(id)a0;

- (id)initWithType:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
