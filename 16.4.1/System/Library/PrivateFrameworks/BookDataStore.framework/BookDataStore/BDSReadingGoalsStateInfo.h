@class NSNumber;

@interface BDSReadingGoalsStateInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *booksFinishedGoal;
@property (retain, nonatomic) NSNumber *streakDayGoal;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBooksFinishedGoal:(id)a0 streakDayGoal:(id)a1;

@end
