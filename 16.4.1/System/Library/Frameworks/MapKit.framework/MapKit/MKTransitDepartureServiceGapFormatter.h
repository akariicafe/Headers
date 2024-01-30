@class NSTimeZone, NSDate;

@interface MKTransitDepartureServiceGapFormatter : NSObject

@property (readonly, nonatomic) NSDate *departureCutoffDate;
@property (readonly, nonatomic) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)_descriptionForDepartureDate:(id)a0 canIncludeDate:(BOOL)a1 outDateFormat:(out unsigned long long *)a2;
- (id)initWithTimeZone:(id)a0 departureCutoffDate:(id)a1;
- (id)lastDepartureAtStringFromDate:(id)a0;
- (id)lastDepartureString;
- (id)lastDepartureUntilStringFromDate:(id)a0;

@end
