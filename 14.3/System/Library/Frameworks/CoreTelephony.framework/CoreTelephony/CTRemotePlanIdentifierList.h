@class NSArray;

@interface CTRemotePlanIdentifierList : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *planIdentifiers;

- (id)init;
- (id)initWithPlanIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
