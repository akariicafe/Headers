@interface QLTextThumbnailRenderer : NSObject

+ (id)mutableAttributedStringForThumbnailWithData:(id)a0 contentType:(id)a1 encoding:(unsigned int)a2 documentAttributes:(id *)a3;
+ (id)mutableAttributedStringForThumbnailWithURL:(id)a0 documentAttributes:(id *)a1;
+ (id)_readingOptionsFromContentType:(id)a0 encoding:(unsigned int)a1;
+ (id)textDocumentTypeFromContentType:(id)a0;

@end
