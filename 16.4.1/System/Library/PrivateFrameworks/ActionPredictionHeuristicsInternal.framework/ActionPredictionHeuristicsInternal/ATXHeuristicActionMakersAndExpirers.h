@class NSArray, NSSet;

@interface ATXHeuristicActionMakersAndExpirers : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *actionMakers;
@property (readonly, nonatomic) NSSet *expirers;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActionMakers:(id)a0 expirers:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
