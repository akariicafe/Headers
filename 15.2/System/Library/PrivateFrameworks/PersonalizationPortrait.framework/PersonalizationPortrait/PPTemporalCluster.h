@class PPEvent, NSArray, NSDate;

@interface PPTemporalCluster : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) PPEvent *event;
@property (readonly, nonatomic) NSArray *topics;
@property (readonly, nonatomic) NSArray *entities;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) NSArray *contactHandles;
@property (readonly, nonatomic) NSArray *mediaItems;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithEvent:(id)a0 startDate:(id)a1 endDate:(id)a2 score:(double)a3 topics:(id)a4 entities:(id)a5 locations:(id)a6 contacts:(id)a7 contactHandles:(id)a8 mediaItems:(id)a9;
- (id)descriptionDateFormatter;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)longDescription;

@end
