@class NSData, CKRecord;

@interface MSPCloudContainerCachedRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKRecord *record;
@property (retain, nonatomic) NSData *contentsHash;
@property (retain, nonatomic) NSData *positionHash;

- (id)initWithRecord:(id)a0;
- (BOOL)isEqualToCloudRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
