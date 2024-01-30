@interface CUIKTextProviderUtils : NSObject

+ (BOOL)dropLeftRedundantDesignator;
+ (BOOL)designatorRequiresWhitespace;
+ (BOOL)smallCapsAllowed;
+ (id)timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)a0 designatorRequiresWhitespace:(BOOL)a1;

@end
