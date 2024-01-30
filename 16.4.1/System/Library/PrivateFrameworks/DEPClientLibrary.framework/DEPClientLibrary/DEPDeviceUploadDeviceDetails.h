@class NSString;

@interface DEPDeviceUploadDeviceDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *deviceUploadStatus;
@property (readonly, nonatomic) NSString *errorMessage;

- (id)initWithDict:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
