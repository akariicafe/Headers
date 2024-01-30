@class NSString;

@interface BTCloudAccountInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isSignedIn;
@property (nonatomic) BOOL manateeAvailable;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSString *loginID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
