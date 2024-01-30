@class NSString, BDSReadingHistoryDayInfo;

@interface BDSReadingHistoryDayEntryInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *date;
@property (retain, nonatomic) BDSReadingHistoryDayInfo *day;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 day:(id)a1;

@end
