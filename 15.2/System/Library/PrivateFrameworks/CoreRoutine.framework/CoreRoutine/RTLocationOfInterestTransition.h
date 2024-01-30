@class NSUUID, NSDate;

@interface RTLocationOfInterestTransition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *stopDate;
@property (readonly, nonatomic) NSUUID *visitIdentifierOrigin;
@property (readonly, nonatomic) NSUUID *visitIdentifierDestination;
@property (readonly, nonatomic) long long modeOfTransportation;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 startDate:(id)a1 stopDate:(id)a2 visitIdentifierOrigin:(id)a3 visitIdentifierDestination:(id)a4 modeOfTransportation:(long long)a5;

@end
