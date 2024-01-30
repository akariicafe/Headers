@class NSString, NSDictionary, NSSet, NSDate;

@interface NMSMessagePersistentContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned short messageID;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSDictionary *idsOptions;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, getter=isFromRequest) BOOL fromRequest;
@property (nonatomic) BOOL sendAcked;
@property (nonatomic) BOOL processAcked;
@property (copy, nonatomic) NSSet *targetDeviceIDs;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
