@class NSString;

@interface TCFontName : NSObject

@property (readonly, nonatomic) NSString *styleName;
@property (readonly, nonatomic) NSString *fullName;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithStyleName:(id)a0 fullName:(id)a1;
- (id)equivalentDictionary;

@end
