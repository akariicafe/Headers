@class UIImage, NSString;

@interface NTKPeopleComplicationImageProvider : CLKImageProvider

@property double borderWidth;
@property double fontSize;
@property (retain, nonatomic) UIImage *profileImage;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *nameAbbreviation;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
