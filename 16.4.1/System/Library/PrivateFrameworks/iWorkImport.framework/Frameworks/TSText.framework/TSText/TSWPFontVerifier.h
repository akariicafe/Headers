@class NSString;

@interface TSWPFontVerifier : NSObject

@property (class, readonly, nonatomic) NSString *missingFontName;

+ (id)sharedInstance;

- (BOOL)isCoreTextDownloadableFontName:(id)a0;
- (BOOL)isCloudKitDownloadableFontName:(id)a0;
- (BOOL)isDownloadableFontName:(id)a0;
- (BOOL)isFontWithPostscriptNameInstalled:(id)a0;

@end
