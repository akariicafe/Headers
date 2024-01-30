@class NSArray, NSDate;

@interface PLMomentCluster : NSObject

@property (readonly, copy, nonatomic) NSArray *moments;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithMoments:(id)a0;

@end
