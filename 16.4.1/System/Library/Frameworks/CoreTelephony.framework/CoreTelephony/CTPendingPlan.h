@class NSString;

@interface CTPendingPlan : CTPlan

@property (readonly, nonatomic) NSString *smdpURL;
@property (readonly, nonatomic) NSString *matchingID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSmdpURL:(id)a0 matchingID:(id)a1;

@end
