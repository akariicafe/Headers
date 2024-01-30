@class NSString, UIImage, NSIndexPath;

@interface UIIndexBarEntry : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *effectiveShortTitle;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) NSString *shortTitle;

+ (id)entryWithTitle:(id)a0;
+ (id)entryWithType:(long long)a0;
+ (id)_dotImageInView:(id)a0;
+ (id)_externalDotImageInView:(id)a0;
+ (id)entryForNumbers;
+ (id)entryForSearch;
+ (id)entryForDotInView:(id)a0;

- (void).cxx_destruct;
- (id)description;

@end
