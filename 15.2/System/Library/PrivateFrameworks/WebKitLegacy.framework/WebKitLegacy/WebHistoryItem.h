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

- (id)target;
- (id)children;
- (id)initFromDictionaryRepresentation:(id)a0;
- (id)description;
- (BOOL)lastVisitWasFailure;
- (BOOL)_scaleIsInitial;
- (struct CGPoint { double x0; double x1; })_scrollPoint;
- (id)_viewportArguments;
- (void)_setScrollPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_setScale:(float)a0 isInitial:(BOOL)a1;
- (void)_setViewportArguments:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)URL;
- (void)setTitle:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })scrollPoint;
- (float)_scale;
- (void)setViewState:(id)a0;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationIncludingChildren:(BOOL)a0;
- (void)_visitedWithTitle:(id)a0;
- (id)initWithURLString:(id)a0 title:(id)a1 lastVisitedTimeInterval:(double)a2;
- (id)_redirectURLs;
- (id)initWithWebCoreHistoryItem:(void *)a0;
- (id)initWithURL:(id)a0 title:(id)a1;
- (id)initWithURLString:(id)a0 title:(id)a1 displayTitle:(id)a2 lastVisitedTimeInterval:(double)a3;
- (BOOL)isTargetItem;
- (id)RSSFeedReferrer;
- (void)setRSSFeedReferrer:(id)a0;
- (BOOL)_isInBackForwardCache;
- (BOOL)_hasCachedPageExpired;

@end
