@class NSNumber, NSString, NSUUID;

@interface ASDVPPRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *accountIdentifier;
@property long long archiveType;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSNumber *externalVersionIdentifier;
@property (copy) NSNumber *itemIdentifier;
@property (retain) NSUUID *requestIdentifier;
@property (nonatomic) long long requestType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
