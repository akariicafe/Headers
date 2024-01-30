@class NSArray, NSDictionary, NSData, NSError;

@interface KTSelfVerificationInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *uriToServerLoggableDatas;
@property (retain) NSArray *syncedLoggableDatas;
@property (retain) NSData *selfDeviceID;
@property (retain) NSError *failure;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSyncedLoggableDatas:(id)a0 uriToServerLoggableDatas:(id)a1;
- (void)updateUri:(id)a0 serverLoggableDatas:(id)a1;

@end
