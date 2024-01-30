@class NSString, NSDate;

@interface PARFlightSearchRequest : PARRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *flightQuery;
@property (copy, nonatomic) NSString *appBundleId;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)responseClass;
- (void).cxx_destruct;
- (unsigned int)nwActivityLabel;

@end
