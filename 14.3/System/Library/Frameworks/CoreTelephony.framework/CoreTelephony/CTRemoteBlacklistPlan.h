@class NSString;

@interface CTRemoteBlacklistPlan : CTPlan

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *blacklistIMEI;
@property (readonly, nonatomic) NSString *blacklistEID;
@property (readonly, nonatomic) NSString *blacklistICCID;
@property (readonly, nonatomic) NSString *uploaderIMEI;
@property (readonly, nonatomic) NSString *uploaderEID;

+ (BOOL)supportsSecureCoding;

- (id)initWithkey:(id)a0 blacklistIMEI:(id)a1 blacklistEID:(id)a2 blacklistICCID:(id)a3 uploaderIMEI:(id)a4 uploaderEID:(id)a5;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
