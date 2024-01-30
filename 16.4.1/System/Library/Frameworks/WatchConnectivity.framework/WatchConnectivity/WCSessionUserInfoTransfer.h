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

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)cancel;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)protobufData;
- (id)initWithComplicationTransferIdentifier:(id)a0;
- (id)initWithProtoBufFileURL:(id)a0;
- (id)initWithTranferIdentifier:(id)a0 complicationTransferIdentifier:(id)a1 currentComplication:(BOOL)a2;
- (BOOL)updateUserInfo:(id)a0 error:(id *)a1;
- (BOOL)updateUserInfoData:(id)a0 error:(id *)a1;
- (BOOL)verifyUserInfo;

@end
