@class NSString, MPCPrivateListeningStateSource, NSTimeZone;

@interface MPCPlaybackDelegationProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long storeAccountID;
@property (readonly, copy, nonatomic) NSString *deviceGUID;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) MPCPrivateListeningStateSource *privateListeningStateSource;
@property (readonly, nonatomic) long long systemReleaseType;
@property (readonly, copy, nonatomic) NSString *requestUserAgent;
@property (readonly, copy, nonatomic) NSTimeZone *timeZone;

- (id)_copyWithClass:(Class)a0 zone:(struct _NSZone { } *)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStoreAccountID:(unsigned long long)a0 deviceGUID:(id)a1 privateListeningStateSource:(id)a2;

@end
