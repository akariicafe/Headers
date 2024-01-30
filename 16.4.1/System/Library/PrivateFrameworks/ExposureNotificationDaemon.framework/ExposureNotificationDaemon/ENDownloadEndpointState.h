@class NSUUID, ENDownloadEndpoint, NSString, NSDate;

@interface ENDownloadEndpointState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ENDownloadEndpoint *endpoint;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSDate *lastFetchAttemptDate;
@property (copy, nonatomic) NSDate *lastSuccessfulFetchDate;
@property (copy, nonatomic) NSString *lastDownloadedFilePath;
@property (readonly, copy, nonatomic) NSString *shortIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;

@end
