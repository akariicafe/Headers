@interface TSUIngestionTypes : NSObject

+ (id)supportedImageTypes;
+ (id)supportedMovieTypes;
+ (id)p_unsupportedPlainTextTypes;
+ (id)p_supportedPlainTextTypes;
+ (id)supportedRichTextTypes;
+ (BOOL)isValidPlainTextUTI:(id)a0;
+ (id)highEfficiencyImageTypes;

@end
