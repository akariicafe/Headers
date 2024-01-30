@class NSString, DCSandboxExtension;

@interface DCDocumentCameraViewServiceSessionRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) DCSandboxExtension *cachesDirectorySandboxExtension;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
