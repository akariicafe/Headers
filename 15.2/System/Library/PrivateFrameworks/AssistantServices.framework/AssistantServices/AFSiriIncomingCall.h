@class NSString, NSArray, TUHandle;

@interface AFSiriIncomingCall : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *callUUID;
@property (readonly, copy, nonatomic) NSString *callProviderIdentifier;
@property (readonly, copy, nonatomic) NSString *callProviderBundleID;
@property (readonly, copy, nonatomic) NSArray *callerContactIdentifiers;
@property (readonly, nonatomic) TUHandle *handle;
@property (readonly, nonatomic) BOOL isVideo;
@property (readonly, nonatomic) BOOL isCallerIDBlocked;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCallUUID:(id)a0 callProviderIdentifier:(id)a1 callProviderBundleID:(id)a2 callerContactIdentifiers:(id)a3 handle:(id)a4 isVideo:(BOOL)a5 isCallerIDBlocked:(BOOL)a6;
- (id)initWithCallUUID:(id)a0 callProviderIdentifier:(id)a1 callProviderBundleID:(id)a2 callers:(id)a3 handle:(id)a4 isVideo:(BOOL)a5 isCallerIDBlocked:(BOOL)a6;

@end
