@class NSString;

@interface SFPeerDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *uniqueID;
@property (copy) NSString *modelIdentifier;
@property (copy) NSString *productName;
@property (copy) NSString *productVersion;
@property (copy) NSString *productBuildVersion;
@property (copy) NSString *name;
@property (copy) NSString *deviceColor;
@property (copy) NSString *enclosureColor;
@property (getter=isDefaultPairedDevice) BOOL defaultPairedDevice;
@property BOOL validKey;
@property long long keyCounter;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
