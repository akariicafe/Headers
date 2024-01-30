@class NSSet, PLDateRangeTitleGenerator, NSString, NSDate, NSObject;
@protocol NSCopying;

@interface PLPhotosHighlightCluster : NSObject

@property (retain, nonatomic) NSSet *assets;
@property (retain, nonatomic) PLDateRangeTitleGenerator *dateRangeTitleGenerator;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) int startTimeZoneOffset;
@property (nonatomic) int endTimeZoneOffset;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short category;
@property (nonatomic) unsigned short kind;
@property (readonly, nonatomic) NSSet *moments;
@property (readonly, nonatomic) NSObject<NSCopying> *objectID;

- (void).cxx_destruct;
- (void)_calculatePropertyValues;
- (void)setMoments:(id)a0;
- (id)initWithMoments:(id)a0 dateRangeTitleGenerator:(id)a1;

@end
