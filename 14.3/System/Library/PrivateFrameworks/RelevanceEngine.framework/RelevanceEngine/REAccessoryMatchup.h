@class REImage, NSString, NSDate;

@interface REAccessoryMatchup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REImage *homeTeamImage;
@property (readonly, nonatomic) NSString *homeTeamName;
@property (readonly, nonatomic) NSString *homeTeamDetail;
@property (readonly, nonatomic) REImage *awayTeamImage;
@property (readonly, nonatomic) NSString *awayTeamName;
@property (readonly, nonatomic) NSString *awayTeamDetail;
@property (readonly, nonatomic) NSString *matchupProgress;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) NSDate *matchupStartDate;
@property (readonly, nonatomic) NSDate *matchupDateFetched;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithHomeTeamImage:(id)a0 homeTeamName:(id)a1 homeTeamDetail:(id)a2 awayTeamImage:(id)a3 awayTeamName:(id)a4 awayTeamDetail:(id)a5 progress:(id)a6 startDate:(id)a7 status:(unsigned long long)a8 dateFetched:(id)a9;

@end
