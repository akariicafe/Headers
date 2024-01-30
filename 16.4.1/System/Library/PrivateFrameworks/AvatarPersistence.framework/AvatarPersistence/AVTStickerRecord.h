@class NSNumber, NSString;

@interface AVTStickerRecord : NSObject <AVTStickerRecord, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *frequencySum;
@property (readonly, nonatomic) NSNumber *serializationVersion;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *avatarRecordIdentifier;
@property (readonly, copy, nonatomic) NSString *stickerConfigurationIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)matchingIdentifierTest:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 avatarRecordIdentifier:(id)a1 stickerConfigurationIdentifier:(id)a2 frequencySum:(id)a3 serializationVersion:(id)a4;

@end
