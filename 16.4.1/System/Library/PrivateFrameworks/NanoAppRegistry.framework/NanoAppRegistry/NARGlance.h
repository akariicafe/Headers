@class NSString, NSDictionary;

@interface NARGlance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *glanceID;
@property (copy, nonatomic) NSDictionary *localizedDisplayNameMap;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;

@end
