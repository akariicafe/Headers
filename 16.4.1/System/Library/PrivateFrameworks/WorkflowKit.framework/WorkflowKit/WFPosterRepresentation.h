@class NSUUID, NSString;

@interface WFPosterRepresentation : NSObject <NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *providerBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)defaultPoster;
+ (id)posterWithSerializedRepresentation:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serializedRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 name:(id)a1 providerBundleIdentifier:(id)a2;

@end
