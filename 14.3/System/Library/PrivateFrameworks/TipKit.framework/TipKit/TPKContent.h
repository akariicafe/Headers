@class NSArray, NSString;

@interface TPKContent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long customizationID;
@property (readonly, nonatomic) NSArray *dismissalEvents;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long version;

+ (id)classSet;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 dismissalEvents:(id)a1 customizationID:(long long)a2;

@end
