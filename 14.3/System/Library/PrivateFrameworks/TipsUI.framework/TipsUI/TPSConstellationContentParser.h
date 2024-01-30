@class UIFont, NSString, NSURL, NSAttributedString, UITraitCollection, NSMutableDictionary, NSDictionary, NSObject;
@protocol OS_dispatch_queue, TPSConstellationContentParserDelegate;

@interface TPSConstellationContentParser : NSObject

@property (nonatomic) BOOL delegateRespondsToBoldFont;
@property (nonatomic) BOOL delegateRespondsToItalicFont;
@property (nonatomic) int numberOfParagraphTags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *assetsSessionItemMap;
@property (retain, nonatomic) NSMutableDictionary *assetsTextAttachmentMap;
@property (retain, nonatomic) UIFont *boldFont;
@property (retain, nonatomic) UIFont *italicFont;
@property (retain, nonatomic) NSDictionary *defaultAttributes;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSURL *assetsBaseURL;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (weak, nonatomic) id<TPSConstellationContentParserDelegate> delegate;
@property (nonatomic) long long numOfActiveRemoteURLSessions;
@property (nonatomic) BOOL ignoreLinks;
@property (copy, nonatomic) UITraitCollection *traitCollection;

+ (id)inlineIconPlaceHolderImage;

- (id)init;
- (id)attributedStringForContent:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)attributedStringForConstellationContent:(id)a0 defaultAttributes:(id)a1 identifier:(id)a2 language:(id)a3 assetsBaseURL:(id)a4 error:(id *)a5;
- (void)cancelAssetFetches;
- (id)attributedStringForTextNode:(id)a0;
- (id)attributedStringForParagraphNode:(id)a0 error:(id *)a1;
- (id)attributedStringForSymbolNode:(id)a0;
- (id)attributedStringForInlineIconNode:(id)a0;
- (id)attributedStringForPersonalizedTextNode:(id)a0 error:(id *)a1;
- (id)attributesWithMarks:(id)a0;
- (id)_colorForSystemColorString:(id)a0;
- (struct CGSize { double x0; double x1; })assetSizeFromAttributes:(id)a0;
- (void)fetchAssetConfiguration:(id)a0 cacheIdentifier:(id)a1 textAttachment:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
