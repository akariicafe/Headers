@class CLKTextProvider, CLKImageProvider;

@interface StaticTemplateDescription : NSObject

@property (retain, nonatomic) CLKImageProvider *modularSmallTop;
@property (retain, nonatomic) CLKTextProvider *modularSmallBottom;
@property (retain, nonatomic) CLKTextProvider *utilityLarge;
@property (retain, nonatomic) CLKTextProvider *utilitySmall;
@property (retain, nonatomic) CLKImageProvider *utilityImageProvider;
@property (retain, nonatomic) CLKTextProvider *modularLargeHeader;
@property (retain, nonatomic) CLKTextProvider *modularLargeFirst;
@property (retain, nonatomic) CLKTextProvider *modularLargeSecond;
@property (retain, nonatomic) CLKImageProvider *circularSmallImage;
@property (retain, nonatomic) CLKImageProvider *circularMediumImage;
@property (retain, nonatomic) CLKImageProvider *extraLargeTop;
@property (retain, nonatomic) CLKTextProvider *extraLargeBottom;
@property (retain, nonatomic) CLKTextProvider *signatureBezel;
@property (retain, nonatomic) CLKTextProvider *signatureCornerTextProvider;

- (void).cxx_destruct;

@end
