@class NSArray, NSDate;

@interface PKPaginatedWebServiceResponse : PKWebServiceResponse

@property (readonly, nonatomic) NSArray *rawDataList;
@property (readonly, nonatomic) BOOL moreComing;
@property (readonly, nonatomic) NSDate *lastUpdated;

+ (BOOL)supportsSecureCoding;
+ (id)responseWithData:(id)a0;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;

@end
