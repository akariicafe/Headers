@class NSString, NSUUID;

@interface ASDManagedRequestStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *bundleVersion;
@property (retain) NSUUID *requestIdentifier;
@property long long state;
@property (retain) NSString *title;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
