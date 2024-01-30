@class AVTUIEnvironment, NSString;
@protocol AVTAvatarRecord;

@interface AVTAvatarRecordCacheableResource : NSObject <AVTCacheableResource>

@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) BOOL includeAvatarData;
@property (readonly, nonatomic) id<AVTAvatarRecord> record;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)persistentIdentifierForRecordData:(id)a0;
+ (id)persistentIdentifierPrefixForRecordWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (BOOL)requiresEncryption;
- (unsigned long long)costForScope:(id)a0;
- (id)identifierForScope:(id)a0;
- (id)initWithAvatarRecord:(id)a0 includeAvatarData:(BOOL)a1 environment:(id)a2;
- (id)persistentDataHashForScope:(id)a0;
- (id)persistentIdentifierForScope:(id)a0;
- (id)tokenForObservingChangesWithHandler:(id /* block */)a0;
- (id)volatileIdentifierForScope:(id)a0;

@end
