@class NSString, NSNumber, NSTimeZone;

@interface SSVPlayActivityEnqueuerProperties : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *buildVersion;
@property (readonly, copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (readonly, copy, nonatomic) NSString *deviceGUID;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) long long systemReleaseType;
@property (readonly, nonatomic, getter=isSBEnabled) BOOL SBEnabled;
@property (readonly, nonatomic) unsigned long long storeAccountID;
@property (readonly, copy, nonatomic) NSString *storeFrontID;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithClass:(Class)a0 zone:(struct _NSZone { } *)a1;

@end
