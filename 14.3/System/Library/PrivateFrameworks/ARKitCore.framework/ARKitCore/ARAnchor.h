@class NSUUID, NSString;

@interface ARAnchor : NSObject <ARDaemonSecureCoding, ARAnchorCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *sessionIdentifier;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } referenceTransform;
@property (nonatomic) double lastUpdateTimestamp;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *name;

- (id)_description:(BOOL)a0;
- (id)debugQuickLookObject;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAnchor:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToAnchor:(id)a0;
- (id)initWithName:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithIdentifier:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;

@end
