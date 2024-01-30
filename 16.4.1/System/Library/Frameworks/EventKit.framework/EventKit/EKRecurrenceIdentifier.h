@class NSString, NSDate;

@interface EKRecurrenceIdentifier : NSObject <NSCopying>

@property (retain) NSString *localUID;
@property (retain) NSDate *recurrenceDate;
@property (retain, nonatomic) NSString *identifierString;

+ (id)recurrenceIdentifierWithString:(id)a0;
+ (const char *)_dateFormatStripTime:(BOOL)a0 stripTimeZone:(BOOL)a1;
+ (id)_recurrenceIdentifierWithRecurrenceDate:(id)a0 localUID:(id)a1 stripTime:(BOOL)a2 stripTimeZone:(BOOL)a3;
+ (id)_recurrenceStringForDate:(id)a0 stripTime:(BOOL)a1 stripTimeZone:(BOOL)a2;
+ (BOOL)_splitIdentifier:(id)a0 intoLocalUID:(id *)a1 recurrenceDate:(id *)a2;
+ (id)localUIDForIdentifierString:(id)a0;
+ (id)recurrenceIdentifierWithLocalUID:(id)a0 recurrenceDate:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
