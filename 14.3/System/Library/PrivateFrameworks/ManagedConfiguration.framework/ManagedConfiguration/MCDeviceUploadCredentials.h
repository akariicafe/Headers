@class NSString;

@interface MCDeviceUploadCredentials : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) NSString *dsToken;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDsid:(id)a0 dsToken:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
