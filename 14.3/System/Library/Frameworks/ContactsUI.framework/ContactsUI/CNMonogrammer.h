@class UIColor, UIFont, NSArray, UIImage, NSString;

@interface CNMonogrammer : NSObject {
    UIImage *_silhouetteMonogram;
    UIImage *_questionMarkMonogram;
    UIImage *_knockoutMaskMonogram;
    double _innerBorderWidth;
    NSString *_silhouetteImageName;
    long long _monogrammerStyle;
    CNMonogrammer *_subMonogrammer;
    UIColor *_tintColor;
    double _scale;
}

@property (nonatomic) double diameter;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL textKnockout;
@property (readonly, nonatomic) UIImage *silhouetteMonogram;
@property (readonly, nonatomic) UIImage *questionMarkMonogram;
@property (readonly, nonatomic) UIImage *knockoutMaskMonogram;
@property (retain, nonatomic) UIFont *font;
@property (readonly, nonatomic) NSArray *keysToFetch;

+ (id)_initialsForContact:(id)a0;
+ (long long)monogramTypeForContact:(id)a0;
+ (id)requiredKeyDescriptor;
+ (id)descriptorForRequiredKeysIncludingImage:(BOOL)a0;

- (void)monogramsAsFlatImages;
- (id)_initialsForFirstName:(id)a0 lastName:(id)a1;
- (id)_copyMonogramWithImageData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)monogramsForStark;
- (id)monogramForPersonWithFirstName:(id)a0 lastName:(id)a1;
- (void)dealloc;
- (id)monogramForContacts:(id)a0;
- (void)_clearMonogramCache;
- (id)initWithStyle:(long long)a0 diameter:(double)a1;
- (id)monogramForContact:(id)a0;
- (double)innerBorderWidth;
- (id)_copyMonogramWithSilhouette;
- (void)monogramsWithTint:(id)a0;
- (id)_copyMonogramWithInitials:(id)a0;
- (id)_copyMonogramWithKnockoutMask;
- (id)silhouetteImageName;
- (id)monogramForContact:(id)a0 isContactImage:(BOOL *)a1;

@end
