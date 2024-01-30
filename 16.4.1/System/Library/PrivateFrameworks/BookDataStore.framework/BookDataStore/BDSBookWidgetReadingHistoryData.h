@class BDSReadingHistoryStateInfo;

@interface BDSBookWidgetReadingHistoryData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) BDSReadingHistoryStateInfo *stateInfo;
@property (nonatomic) BOOL readingGoalsEnabled;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStateInfo:(id)a0 readingGoalsEnabled:(BOOL)a1;

@end
