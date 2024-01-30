@class NSString;

@interface MCDeviceUploadDeviceDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *deviceUploadStatus;
@property (readonly, nonatomic) NSString *errorMessage;

- (id)initWithDict:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
