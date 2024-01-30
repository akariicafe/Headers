@class NSString;

@interface _PRMonogramFontSpec : NSObject

@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) double baseSize;
@property (readonly, nonatomic) double tracking;

+ (id)specForFontWithName:(id)a0 baseSize:(double)a1 tracking:(double)a2;

- (void).cxx_destruct;

@end
