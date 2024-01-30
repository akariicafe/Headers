@class NSString, PKOSVersionRequirement;

@interface PKAppleCashSharingRecipientCapabilities : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *deviceRegion;
@property (nonatomic) BOOL supportsManatee;
@property (retain, nonatomic) PKOSVersionRequirement *fromDeviceVersion;

+ (id)appleCashSharingRecipientCapbilitesRequestWithProtobuf:(id)a0;

- (id)protobuf;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
