@class NSString, UIImage;

@interface ICSearchSuggestion : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *suggestionItemTitle;
@property (readonly, nonatomic) NSString *tokenTitle;
@property (readonly, nonatomic) NSString *subQueryString;
@property (readonly, nonatomic) UIImage *iconImage;

+ (unsigned long long)suggestionTypeOfFirstItemInSuggestions:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(unsigned long long)a0;

@end
