@class NSString, NSArray;

@interface TUCloudCallingDevice : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *modelIdentifier;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSArray *linkedUserURIs;
@property (nonatomic, getter=isDefaultPairedDevice) BOOL defaultPairedDevice;
@property (nonatomic) BOOL supportsRestrictingSecondaryCalling;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
