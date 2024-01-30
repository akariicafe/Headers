@class NSDictionary, UIFont, NSString;

@interface ASDisplayContext : NSObject {
    double _nameFontSize;
    double _dataFontSize;
    double _multilineDataFontSize;
    NSString *_contentSizeCategory;
}

@property (retain, nonatomic) UIFont *nameFont;
@property (retain, nonatomic) UIFont *dataFont;
@property (retain, nonatomic) UIFont *multilineDataFont;
@property (retain, nonatomic) UIFont *unitFont;
@property (retain, nonatomic) UIFont *multilineUnitFont;
@property (retain, nonatomic) UIFont *descriptionFont;
@property (retain, nonatomic) NSDictionary *titleColors;
@property (retain, nonatomic) NSDictionary *keyColors;

+ (id)_companionContext;
+ (void)_contentSizeChangeForContext:(id)a0 withBlock:(id /* block */)a1;
+ (id)_gizmoContext;
+ (id)displayContextWithName:(id)a0;

- (void).cxx_destruct;
- (id)keyColorForDisplayMode:(long long)a0;
- (id)titleColorForDisplayMode:(long long)a0;

@end
