@class NSString, NSDictionary;

@interface AFCompanionDeviceInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *assistantID;
@property (readonly, copy, nonatomic) NSString *speechID;
@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (readonly, copy, nonatomic) NSString *productPrefix;
@property (readonly, copy, nonatomic) NSString *aceHost;
@property (readonly, copy, nonatomic) NSDictionary *syncMetadata;
@property (readonly, nonatomic) BOOL syncMetadataCapability;
@property (readonly, nonatomic) BOOL peerToPeerHandoffCapability;
@property (readonly, nonatomic) BOOL muxSupportCapability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)buildDictionaryRepresentation;
- (id)init;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithAssistantID:(id)a0 speechID:(id)a1 idsIdentifier:(id)a2 productPrefix:(id)a3 aceHost:(id)a4 syncMetadata:(id)a5 syncMetadataCapability:(BOOL)a6 peerToPeerHandoffCapability:(BOOL)a7 muxSupportCapability:(BOOL)a8;

@end
