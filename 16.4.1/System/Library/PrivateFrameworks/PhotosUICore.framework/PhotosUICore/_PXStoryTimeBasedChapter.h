@class NSString, NSObject, NSDateInterval;
@protocol NSCopying;

@interface _PXStoryTimeBasedChapter : NSObject <PXStoryChapter, PXStoryMutableChapter, NSCopying> {
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
}

@property (retain, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSDateInterval *extendedDateIntervalForComparisonWithAssetDates;
@property (copy, nonatomic) NSString *firstAssetLocalIdentifier;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (void)setLocalizedTitle:(id)a0;
- (void)setLocalizedSubtitle:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)compareStartDateTo:(id)a0;
- (id)initWithDateInterval:(id)a0 firstAssetLocalIdentifier:(id)a1;

@end
