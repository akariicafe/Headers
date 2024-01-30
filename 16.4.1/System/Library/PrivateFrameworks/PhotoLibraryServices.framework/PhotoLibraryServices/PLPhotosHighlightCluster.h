@class NSSet, NSObject, NSDate;
@protocol NSCopying;

@interface PLPhotosHighlightCluster : NSObject

@property (retain, nonatomic) NSSet *assets;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) int startTimeZoneOffset;
@property (nonatomic) int endTimeZoneOffset;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short category;
@property (nonatomic) unsigned short kind;
@property (readonly, nonatomic) NSSet *moments;
@property (readonly, nonatomic) NSObject<NSCopying> *objectID;

- (void)_calculatePropertyValues;
- (id)initWithMoments:(id)a0;
- (void)setMoments:(id)a0;
- (void).cxx_destruct;

@end
