@class NSArray;

@interface TSUIngestionTypes : NSObject

@property (class, readonly, nonatomic) NSArray *supportedImageTypes;
@property (class, readonly, nonatomic) NSArray *supportedMovieTypes;
@property (class, readonly, nonatomic) NSArray *supportedMovieAnimatedImageTypes;
@property (class, readonly, nonatomic) NSArray *supportedRichTextTypes;
@property (class, readonly, nonatomic) NSArray *highEfficiencyImageTypes;

+ (id)p_unsupportedPlainTextTypes;
+ (id)p_supportedPlainTextTypes;
+ (BOOL)isValidPlainTextUTI:(id)a0;

@end
