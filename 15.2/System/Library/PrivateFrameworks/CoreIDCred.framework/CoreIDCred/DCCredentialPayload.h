@class NSString, NSData, NSDate;

@interface DCCredentialPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long format;
@property unsigned long long protectionType;
@property (retain) NSString *docType;
@property (retain) NSDate *createdAt;
@property (retain) NSDate *updatedAt;
@property (retain) NSDate *validFrom;
@property (retain) NSDate *validUntil;
@property (retain) NSData *payloadData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
