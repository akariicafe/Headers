@class NSString;

@interface TSWPFontVerifier : NSObject

@property (class, readonly, nonatomic) NSString *missingFontName;

+ (id)sharedInstance;

- (BOOL)isFontWithPostscriptNameInstalled:(id)a0;

@end
