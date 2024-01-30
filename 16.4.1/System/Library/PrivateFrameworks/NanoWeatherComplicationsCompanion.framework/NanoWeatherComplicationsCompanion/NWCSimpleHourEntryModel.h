@class NSString, NSTimeZone;

@interface NWCSimpleHourEntryModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *topString;
@property (readonly) NSString *middleString;
@property (readonly) NSString *bottomString;
@property (readonly) NSTimeZone *timeZone;
@property (readonly) BOOL isDay;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTopString:(id)a0 middleString:(id)a1 bottomString:(id)a2 isDay:(BOOL)a3 timeZone:(id)a4;

@end
