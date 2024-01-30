@class NSArray, NSString;

@interface PKApplyWebServiceApplicationsResponse : PKApplyWebServiceResponse

@property (readonly, nonatomic) NSArray *allFeatureApplications;
@property (readonly, copy, nonatomic) NSString *lastUpdated;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
