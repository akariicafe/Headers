@class UIColor, NSString, UIFont, UIImage;

@interface WFParameterValuePickerTableViewCellConfiguration : NSObject <UIContentConfiguration>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIColor *secondaryTextColor;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIFont *secondaryTextFont;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL forceImageScaling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)updatedConfigurationForState:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)makeContentView;
- (BOOL)isEqual:(id)a0;

@end
