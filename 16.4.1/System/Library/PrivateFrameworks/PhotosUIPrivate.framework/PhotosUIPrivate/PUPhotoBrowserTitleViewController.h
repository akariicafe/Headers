@class PLDateRangeFormatter, NSString, UITapGestureRecognizer, UIColor, UIView, NSDate, NSDateComponentsFormatter;
@protocol PUPhotoBrowserTitleViewControllerDelegate;

@interface PUPhotoBrowserTitleViewController : NSObject {
    struct { BOOL respondsToTapped; } _delegateFlags;
}

@property (nonatomic, setter=_setPerformingChanges:) BOOL _isPerformingChanges;
@property (nonatomic, setter=_setUpdating:) BOOL _isUpdating;
@property (nonatomic, setter=_setNeedsUpdateDayAndTimeDescriptions:) BOOL _needsUpdateDayAndTimeDescriptions;
@property (nonatomic, setter=_setNeedsUpdatePlayClockDescription:) BOOL _needsUpdatePlayClockDescription;
@property (nonatomic, setter=_setNeedsUpdateLabels:) BOOL _needsUpdateLabels;
@property (nonatomic, setter=_setNeedsUpdateGestureRecognizers:) BOOL _needsUpdateGestureRecognizers;
@property (readonly, nonatomic) PLDateRangeFormatter *_dayFormatter;
@property (readonly, nonatomic) PLDateRangeFormatter *_timeFormatter;
@property (readonly, nonatomic) NSDateComponentsFormatter *_playClockFormatter;
@property (retain, nonatomic, setter=_setDayDescription:) NSString *_dayDescription;
@property (retain, nonatomic, setter=_setTimeDescription:) NSString *_timeDescription;
@property (retain, nonatomic, setter=_setPlayClockDescription:) NSString *_playClockDescription;
@property (retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer;
@property (readonly, nonatomic) UIView *view;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (weak, nonatomic) id<PUPhotoBrowserTitleViewControllerDelegate> delegate;
@property (nonatomic, getter=isTappable) BOOL tappable;
@property (nonatomic, getter=isUsingCompactTitleView) BOOL usingCompactTitleView;
@property (retain, nonatomic) NSString *geoDescription;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentPlaybackTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } playbackDuration;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (retain, nonatomic) UIColor *subtitleTextColor;

- (void)_handleTapGestureRecognizer:(id)a0;
- (void)_assertInsideUpdate;
- (void)_assertInsideChangeBlock;
- (void)_updatePlayClockDescriptionIfNeeded;
- (void)_updateGestureRecognizersIfNeeded;
- (void)_invalidateGestureRecognizers;
- (void)performChanges:(id /* block */)a0;
- (void)_invalidateLabels;
- (void)_invalidateDayAndTimeDescriptions;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_updateLabelsIfNeeded;
- (void)_setNeedsUpdate;
- (void)_invalidatePlayClockDescription;
- (void)_dateFormatterChanged:(id)a0;
- (id)init;
- (void)_updateDayAndTimeDescriptionsIfNeeded;
- (void).cxx_destruct;

@end
