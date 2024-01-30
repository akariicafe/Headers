@class NSArray, UIFont;

@interface AKFontListController : NSObject

@property (retain) NSArray *fonts;
@property (retain) UIFont *defaultFont;

+ (id)attributedStringForFont:(id)a0;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (id)_createFontsList;

@end
