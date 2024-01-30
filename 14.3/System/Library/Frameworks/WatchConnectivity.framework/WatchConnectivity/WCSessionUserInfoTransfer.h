@class NSString, NSDictionary, NSData, NSDate, NSError, WCUserInfo;

@interface WCSessionUserInfoTransfer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) WCUserInfo *userInfoStorage;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain) NSError *transferError;
@property (copy) NSString *transferIdentifier;
@property (readonly, copy) NSData *userInfoData;
@property (copy) NSString *complicationTransferIdentifier;
@property (nonatomic, getter=isCurrentComplicationInfo) BOOL currentComplicationInfo;
@property (nonatomic, getter=isTransferring) BOOL transferring;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)protobufData;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTranferIdentifier:(id)a0 complicationTransferIdentifier:(id)a1 currentComplication:(BOOL)a2;
- (BOOL)updateUserInfoData:(id)a0 error:(id *)a1;
- (BOOL)updateUserInfo:(id)a0 error:(id *)a1;
- (BOOL)verifyUserInfo;
- (id)initWithComplicationTransferIdentifier:(id)a0;
- (id)initWithProtoBufFileURL:(id)a0;

@end
