@class NSString, WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <NSCopying> {
    WebHistoryItemPrivate *_private;
}

@property (readonly, copy, nonatomic) NSString *originalURLString;
@property (readonly, copy, nonatomic) NSString *URLString;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) double lastVisitedTimeInterval;
@property (copy, nonatomic) NSString *alternateTitle;

+ (void)initialize;
+ (id)entryWithURL:(id)a0;

- (id)URL;
- (id)initFromDictionaryRepresentation:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (float)_scale;
- (void)setViewState:(id)a0;
- (id)children;
- (id)description;
- (id)target;
- (void)setTitle:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)lastVisitWasFailure;
- (BOOL)_scaleIsInitial;
- (struct CGPoint { double x0; double x1; })_scrollPoint;
- (id)_viewportArguments;
- (void)_setScrollPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_setScale:(float)a0 isInitial:(BOOL)a1;
- (void)_setViewportArguments:(id)a0;
- (id)dictionaryRepresentationIncludingChildren:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })scrollPoint;
- (void)_visitedWithTitle:(id)a0;
- (id)initWithURLString:(id)a0 title:(id)a1 lastVisitedTimeInterval:(double)a2;
- (id)_redirectURLs;
- (id)initWithWebCoreHistoryItem:(struct Ref<WebCore::HistoryItem, WTF::DumbPtrTraits<WebCore::HistoryItem> > { struct HistoryItem *x0; } *)a0;
- (id)initWithURL:(id)a0 title:(id)a1;
- (id)initWithURLString:(id)a0 title:(id)a1 displayTitle:(id)a2 lastVisitedTimeInterval:(double)a3;
- (BOOL)isTargetItem;
- (id)RSSFeedReferrer;
- (void)setRSSFeedReferrer:(id)a0;
- (BOOL)_isInBackForwardCache;
- (BOOL)_hasCachedPageExpired;

@end
