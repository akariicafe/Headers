@class NSAttributedString, NSString, NSValue, ICSearchResultConfiguration, NSDictionary, NSTextCheckingResult, NSRegularExpression, ICSearchResultRegexMatchFinder;
@protocol ICItemIdentifier, ICSearchIndexable;

@interface ICSearchResult : NSObject <ICItemIdentifier> {
    unsigned long long _cachedHash;
}

@property (retain, nonatomic) id<ICSearchIndexable> currentContextObject;
@property (readonly, nonatomic) NSDictionary *decomposedHighlightInfo;
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex;
@property (retain, nonatomic) NSValue *firstMatchingRangeInNote;
@property (retain, nonatomic) NSRegularExpression *tipKitCheckRegex;
@property (retain, nonatomic) NSString *displayingTitle;
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *titleHighlightRegexMatchFinder;
@property (retain, nonatomic) NSTextCheckingResult *displayingTitleCheckingResult;
@property (retain, nonatomic) NSAttributedString *titleAttributedString;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleAttributedStringInsideFrame;
@property (retain, nonatomic) NSString *displayingSnippet;
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *snippetHighlightRegexMatchFinder;
@property (retain, nonatomic) NSTextCheckingResult *displayingSnippetCheckingResult;
@property (retain, nonatomic) NSAttributedString *snippetAttributedString;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } snippetAttributedStringInsideFrame;
@property (nonatomic) BOOL isDisplayingParticipantMatch;
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *participantHighlightRegexMatchFinder;
@property (readonly, nonatomic) id<ICSearchIndexable> object;
@property (readonly, nonatomic) ICSearchResultConfiguration *configuration;
@property (readonly, nonatomic) id<ICItemIdentifier> parentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributedStringWithMatchHighlighted:(id)a0 textCheckingResult:(id)a1 usingAttributes:(id)a2 highlightColor:(id)a3 insideFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 isSnippetForParticipantMatch:(BOOL)a5 finishingUpRegexMatchFinder:(id)a6;
+ (id)attributesByHighlightingAttributes:(id)a0 withHighlightColor:(id)a1;
+ (id)authorNameToHighlightForNote:(id)a0 fromSearchResult:(id)a1 textCheckingResult:(id *)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForAttributedString:(id)a0 fittingSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)canFitAttributedString:(id)a0 ellipses:(id)a1 shouldPrefixWithEllipses:(BOOL)a2 insideFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 centered:(BOOL)a4;
+ (id)finishUpHighlightingWithMatchFinder:(id)a0 forAttributedString:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 highlightedAttributes:(id)a3;
+ (id)firstTextCheckingResultOfRegex:(id)a0 inDocumentText:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributedSummaryWithBaseAttributes:(id)a0 highlightColor:(id)a1 insideFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)attributedTitleWithBaseAttributes:(id)a0 highlightColor:(id)a1 insideFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (long long)compareByModificationDate:(id)a0;
- (id)initWithMainContextObject:(id)a0 currentContextObject:(id)a1 configuration:(id)a2;
- (id)initWithObject:(id)a0 configuration:(id)a1;
- (void)initializeRegexes;
- (void)prepareDisplayingSnippetWithAccessingObject:(id)a0;
- (void)prepareDisplayingTitleWithAccessingObject:(id)a0;
- (void)prepareFirstMatchingRangeWithAccessingObject:(id)a0;
- (void)refetchObjectFromContext:(id)a0;
- (void)refreshDisplaySnippet;
- (void)refreshDisplayTitle;
- (void)refreshFirstMatchingRange;
- (id)snippetWithBaseAttributes:(id)a0 highlightColor:(id)a1 insideFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
