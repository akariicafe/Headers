@class NSString;

@interface CADChangeTrackingClientId : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *suffix;
@property (readonly, nonatomic) NSString *customClientId;
@property (readonly, nonatomic) BOOL hasCustomClientId;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCustomClientId:(id)a0;
- (id)initWithSuffix:(id)a0;
- (BOOL)isEqualToChangeTrackingClientId:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasSuffix;
- (id)clientId;
- (id)clientIdWithBundleId:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
