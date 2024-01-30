@class NSValue, NSDate, TTTextEditFilter;
@protocol ICActivityEventResolving;

@interface ICActivityStreamDigest : NSObject

@property (nonatomic, readonly) TTTextEditFilter *objc_recentUpdatesFilter;
@property (nonatomic, readonly) BOOL objc_hasUnseenHighlights;
@property (nonatomic, readonly) BOOL objc_hasUnseenSummary;
@property (nonatomic, readonly) BOOL objc_hasRecentUpdates;
@property (nonatomic, readonly) NSValue *objc_recentUpdatesRangeValue;
@property (nonatomic, readonly) BOOL objc_isCurrentUserMentionedInRecentSummary;
@property (readonly, nonatomic) id<ICActivityEventResolving> resolverStorage;
@property (copy, nonatomic) NSDate *lastActivitySummaryViewedDate;
@property (copy, nonatomic) NSDate *recentUpdatesGenerationDate;
@property (retain, nonatomic) id recentActivityEventsStorage;
@property (readonly, nonatomic) TTTextEditFilter *recentUpdatesFilter;
@property (readonly, nonatomic) BOOL hasUnseenHighlights;
@property (readonly, nonatomic) BOOL hasUnseenSummary;
@property (readonly, nonatomic) BOOL hasRecentUpdates;
@property (readonly, nonatomic) NSValue *recentUpdatesRangeValue;
@property (readonly, nonatomic) BOOL isCurrentUserMentionedInRecentSummary;

- (id)initWithResolver:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCurrentUserMentionedInFilter:(id)a0;
- (BOOL)objc_isCurrentUserMentionedInFilter:(id)a0;

@end
