@class NSString, NSDate;

@interface GKPlayerActivityRelationshipAchievement : GKPlayerActivityRelationshipBase

@property (retain, nonatomic) NSString *achDescription;
@property (retain, nonatomic) NSDate *timeStamp;
@property (nonatomic) long long progress;

+ (id)secureCodedPropertyKeys;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
