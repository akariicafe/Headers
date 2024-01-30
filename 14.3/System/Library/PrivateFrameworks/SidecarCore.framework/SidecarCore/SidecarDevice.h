@class NSUUID, NSURL, NSString;

@interface SidecarDevice : NSObject <NSSecureCoding> {
    NSUUID *_identifier;
    NSString *_model;
    NSString *_name;
    unsigned long long _status;
    NSString *_version;
    long long _rapportVersion;
    NSString *_deviceTypeIdentifier;
    unsigned long long _generation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long rapportVersion;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) NSString *localizedDeviceType;
@property (readonly, nonatomic) NSString *model;
@property (nonatomic) unsigned long long status;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) BOOL hasHomeButton;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *deviceTypeIdentifier;

+ (id)allDevices;
+ (id)imageURLForDeviceTypeIdentifier:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 model:(id)a1 name:(id)a2 version:(id)a3;
- (void)_updateFromDevice:(id)a0 generation:(unsigned long long)a1;
- (id)initWithIdentifier:(id)a0 model:(id)a1 name:(id)a2;

@end
