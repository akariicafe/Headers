@class NSDictionary, NSString, TCFontFamily;

@interface TCFont : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *namesByLanguage;
@property (readonly, nonatomic) NSString *psName;
@property (readonly, nonatomic) struct TCFontStyling { int fontClass; unsigned int stringEncoding; char weight; BOOL italic; int width; } styling;
@property (nonatomic) TCFontFamily *family;

+ (id)fontWithFont:(id)a0;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (int)preferredLanguage;
- (id)description;
- (void).cxx_destruct;
- (id)englishName;
- (id)equivalentDictionary;
- (id)initWithNamesByLanguage:(id)a0 psName:(id)a1 styling:(struct TCFontStyling { int x0; unsigned int x1; char x2; BOOL x3; int x4; })a2;
- (id)localizedFontName;

@end
