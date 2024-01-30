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

- (BOOL)lastVisitWasFailure;
- (id)initFromDictionaryRepresentation:(id)a0;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (struct CGPoint { double x0; double x1; })scrollPoint;
- (id)target;
- (unsigned long long)hash;
- (id)init;
- (id)children;
- (id)description;
- (void)setTitle:(id)a0;
- (float)_scale;
- (BOOL)_scaleIsInitial;
- (struct CGPoint { double x0; double x1; })_scrollPoint;
- (void)_setScale:(float)a0 isInitial:(BOOL)a1;
- (void)_setScrollPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_setViewportArguments:(id)a0;
- (id)_viewportArguments;
- (void)setViewState:(id)a0;
- (id)initWithURL:(id)a0 title:(id)a1;
- (id)RSSFeedReferrer;
- (BOOL)_hasCachedPageExpired;
- (BOOL)_isInBackForwardCache;
- (id)_redirectURLs;
- (void)_visitedWithTitle:(id)a0;
- (id)dictionaryRepresentationIncludingChildren:(BOOL)a0;
- (id)initWithURLString:(id)a0 title:(id)a1 displayTitle:(id)a2 lastVisitedTimeInterval:(double)a3;
- (id)initWithURLString:(id)a0 title:(id)a1 lastVisitedTimeInterval:(double)a2;
- (id)initWithWebCoreHistoryItem:(void *)a0;
- (BOOL)isTargetItem;
- (void)setRSSFeedReferrer:(id)a0;

@end
