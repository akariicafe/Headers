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

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
