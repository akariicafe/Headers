@class NSArray, NSString;

@interface USCategoryUsageReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *applicationUsage;
@property (readonly, copy) NSString *categoryIdentifier;
@property (readonly) double totalUsageTime;
@property (readonly, copy) NSArray *webUsage;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCategoryIdentifier:(id)a0 totalUsageTime:(double)a1 applicationUsage:(id)a2 webUsage:(id)a3;
- (void)_usCategoryUsageReportCommonInitWithTotalUsageTime:(double)a0 applicationUsage:(id)a1 webUsage:(id)a2;

@end
