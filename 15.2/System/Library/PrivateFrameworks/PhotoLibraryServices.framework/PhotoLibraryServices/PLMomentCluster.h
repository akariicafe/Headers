@class NSArray, NSDate;

@interface PLMomentCluster : NSObject

@property (readonly, copy, nonatomic) NSArray *moments;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMoments:(id)a0;
- (unsigned long long)hash;

@end
