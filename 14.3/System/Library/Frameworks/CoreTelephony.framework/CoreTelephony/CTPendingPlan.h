@class NSString;

@interface CTPendingPlan : CTPlan

@property (readonly, nonatomic) NSString *smdpURL;
@property (readonly, nonatomic) NSString *matchingID;

+ (BOOL)supportsSecureCoding;

- (id)initWithSmdpURL:(id)a0 matchingID:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
