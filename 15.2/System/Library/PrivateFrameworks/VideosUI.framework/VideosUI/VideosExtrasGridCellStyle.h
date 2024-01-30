@class NSString, NSDictionary, UIColor;

@interface VideosExtrasGridCellStyle : NSObject <NSCopying>

@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double titleFirstBaselineHeight;
@property (nonatomic) double subtitleFirstBaselineHeight;
@property (copy, nonatomic) NSString *titleTextStyle;
@property (copy, nonatomic) NSString *subtitleTextStyle;
@property (copy, nonatomic) NSDictionary *titleDefaultFontAttributes;
@property (copy, nonatomic) NSDictionary *subtitleDefaultFontAttributes;
@property (copy, nonatomic) UIColor *titleTextColor;
@property (copy, nonatomic) UIColor *subtitleTextColor;
@property (nonatomic) double textFirstBaselineToBottom;
@property (nonatomic) double textLastBaselineToBottom;
@property (nonatomic) long long defaultTextAlignment;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
