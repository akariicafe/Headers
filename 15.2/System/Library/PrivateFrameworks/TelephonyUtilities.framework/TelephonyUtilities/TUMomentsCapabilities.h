@class NSSet;

@interface TUMomentsCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int availability;
@property (readonly, copy, nonatomic) NSSet *supportedMediaTypes;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToCapabilities:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithAvailability:(int)a0 supportedMediaTypes:(id)a1;

@end
