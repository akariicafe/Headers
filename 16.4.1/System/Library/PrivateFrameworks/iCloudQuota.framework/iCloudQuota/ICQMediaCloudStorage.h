@class NSString, NSNumber;

@interface ICQMediaCloudStorage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *displayLabel;
@property (copy, nonatomic) NSString *displayColor;
@property (copy, nonatomic) NSString *displayColorDark;
@property (retain, nonatomic) NSNumber *storageUsed;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
