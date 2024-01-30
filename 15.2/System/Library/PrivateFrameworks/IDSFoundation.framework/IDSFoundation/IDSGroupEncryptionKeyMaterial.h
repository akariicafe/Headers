@class NSUUID, NSString, NSData, NSDate, NSMutableSet;

@interface IDSGroupEncryptionKeyMaterial : NSObject <NSCopying> {
    NSMutableSet *_devicesToBeSent;
}

@property (class, nonatomic) unsigned int locallyGeneratedKeysCounter;

@property (readonly, nonatomic) NSUUID *keyIndex;
@property (readonly, nonatomic) NSData *keySalt;
@property (readonly, nonatomic) NSData *keyMaterial;
@property (readonly, nonatomic) NSDate *createdAt;
@property (nonatomic) BOOL isSentToClient;
@property (nonatomic) BOOL isGeneratedLocally;
@property (nonatomic) unsigned int generationCounter;
@property (readonly, nonatomic) NSString *groupID;

- (id)initWithKeyMaterial:(id)a0 keySalt:(id)a1 keyIndex:(id)a2 groupID:(id)a3 isGeneratedLocally:(BOOL)a4 createdAt:(id)a5 generationCounter:(unsigned int)a6;
- (BOOL)isEqualToRealTimeEncryptionKeyMaterial:(id)a0;
- (id)initWithIndex:(id)a0 groupID:(id)a1;
- (void)changeCreatedAt:(id)a0;
- (id)initWithKeyMaterial:(id)a0 keySalt:(id)a1 keyIndex:(id)a2 groupID:(id)a3;
- (id)initWithKeyMaterial:(id)a0 keySalt:(id)a1 keyIndex:(id)a2 groupID:(id)a3 generationCounter:(unsigned int)a4;
- (void)sentToDevice:(id)a0;
- (void)removeDeviceFromSentToDevice:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)dictionaryRepresentation;

@end
