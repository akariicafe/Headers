@class NSArray, NSSet;

@interface ATXHeuristicActionMakersAndExpirers : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *actionMakers;
@property (readonly, nonatomic) NSSet *expirers;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithActionMakers:(id)a0 expirers:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
