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

+ (id)descriptorForRequiredKeysIncludingImage:(BOOL)a0;
+ (id)_initialsForContact:(id)a0;
+ (id)requiredKeyDescriptor;
+ (long long)monogramTypeForContact:(id)a0;

- (id)monogramForContact:(id)a0 isContactImage:(BOOL *)a1;
- (id)_copyMonogramWithSilhouette;
- (id)_copyMonogramWithImageData:(id)a0;
- (id)monogramForContacts:(id)a0;
- (id)silhouetteImageName;
- (void)dealloc;
- (id)_initialsForFirstName:(id)a0 lastName:(id)a1;
- (id)monogramForPersonWithFirstName:(id)a0 lastName:(id)a1;
- (id)_copyMonogramWithInitials:(id)a0;
- (id)initWithStyle:(long long)a0 diameter:(double)a1;
- (id)init;
- (void)monogramsWithTint:(id)a0;
- (void)_clearMonogramCache;
- (void)monogramsForStark;
- (id)monogramForContact:(id)a0;
- (double)innerBorderWidth;
- (void).cxx_destruct;
- (void)monogramsAsFlatImages;
- (id)_copyMonogramWithKnockoutMask;

@end
