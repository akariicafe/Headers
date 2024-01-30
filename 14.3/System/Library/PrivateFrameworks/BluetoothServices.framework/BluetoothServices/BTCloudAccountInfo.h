@class NSString;

@interface BTCloudAccountInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isSignedIn;
@property (nonatomic) BOOL manateeAvailable;
@property (retain, nonatomic) NSString *loginID;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
