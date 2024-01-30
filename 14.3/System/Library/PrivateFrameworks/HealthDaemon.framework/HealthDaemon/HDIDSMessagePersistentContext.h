@class NSString, NSDictionary, NSDate;

@interface HDIDSMessagePersistentContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned short messageID;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, getter=isFromRequest) BOOL fromRequest;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
