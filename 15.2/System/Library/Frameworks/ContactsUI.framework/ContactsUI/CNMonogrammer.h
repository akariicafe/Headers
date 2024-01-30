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
- (id)_copyMonogramWithSilhouette;
- (void)_clearMonogramCache;
- (id)_initialsForFirstName:(id)a0 lastName:(id)a1;
- (void)monogramsForStark;
- (double)innerBorderWidth;
- (id)monogramForPersonWithFirstName:(id)a0 lastName:(id)a1;
- (id)silhouetteImageName;
- (id)monogramForContacts:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)monogramForContact:(id)a0;
- (id)initWithStyle:(long long)a0 diameter:(double)a1;
- (id)monogramForContact:(id)a0 isContactImage:(BOOL *)a1;
- (id)_copyMonogramWithImageData:(id)a0;
- (id)_copyMonogramWithKnockoutMask;
- (id)_copyMonogramWithInitials:(id)a0;
- (void)monogramsWithTint:(id)a0;
- (void)dealloc;

@end
