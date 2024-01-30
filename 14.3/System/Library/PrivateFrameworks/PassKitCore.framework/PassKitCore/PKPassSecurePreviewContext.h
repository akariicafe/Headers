@class NSString;

@interface PKPassSecurePreviewContext : NSObject

@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *primaryColor;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSString *secondaryColor;
@property (copy, nonatomic) NSString *tertiaryText;
@property (copy, nonatomic) NSString *tertiaryColor;
@property (readonly, nonatomic) struct CGImage { } *image;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithBackgroundColor:(id)a0 primaryColor:(id)a1 secondaryColor:(id)a2 tertiaryColor:(id)a3;
- (void)setImage:(struct CGImage { } *)a0;

@end
