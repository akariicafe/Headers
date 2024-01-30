@class NSDictionary, NSCharacterSet;

@interface TSWPTextMeasurerBundle : NSObject

@property (retain, nonatomic) NSDictionary *fontAttributes;
@property (nonatomic) struct TSWPFontHeightInfo { double spaceBefore; double attachmentHeight; double ascent; double capHeight; double descent; double leadingAbove; double leadingBelow; double spaceAfter; double verticalHeight; double xHeight; double underlinePosition; double underlineThickness; } fontHeightInfo;
@property (retain, nonatomic) NSCharacterSet *coveredCharacterSet;

- (void).cxx_destruct;

@end
