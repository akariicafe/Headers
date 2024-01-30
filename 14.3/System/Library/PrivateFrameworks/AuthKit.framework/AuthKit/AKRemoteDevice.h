@class NSString, NSDictionary, NSDate;

@interface AKRemoteDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly, copy, nonatomic) NSString *buildNumber;
@property (readonly, copy, nonatomic) NSString *operatingSystemName;
@property (readonly, copy, nonatomic) NSString *operatingSystemVersion;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *colorCode;
@property (readonly, copy, nonatomic) NSString *enclosureColorCode;
@property (readonly, copy, nonatomic) NSString *coverGlassColorCode;
@property (readonly, copy, nonatomic) NSString *housingColorCode;
@property (readonly, copy, nonatomic) NSString *backingColorCode;
@property (readonly, nonatomic) BOOL trusted;
@property (readonly, nonatomic) BOOL inCircle;
@property (readonly, copy, nonatomic) NSDate *lastUpdatedDate;
@property (readonly, copy, nonatomic) NSString *machineId;
@property (readonly, copy, nonatomic) NSDictionary *additionalInfo;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)_initWithInfo:(id)a0;
- (id)initWithInfo:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
