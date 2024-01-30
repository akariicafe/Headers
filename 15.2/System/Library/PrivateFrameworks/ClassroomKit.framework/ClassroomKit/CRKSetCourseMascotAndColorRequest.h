@class DMFControlGroupIdentifier;

@interface CRKSetCourseMascotAndColorRequest : CATTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic) unsigned long long mascotType;
@property (nonatomic) unsigned long long colorType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
