@class NSString, NSUUID;

@interface AFAudioSessionCoordinationSystemInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isSupportedAndEnabled;
@property (readonly, copy, nonatomic) NSString *homeKitRoomName;
@property (readonly, copy, nonatomic) NSUUID *homeKitMediaSystemIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaRemoteGroupIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaRemoteRouteIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)buildDictionaryRepresentation;
- (id)initWithIsSupportedAndEnabled:(BOOL)a0 homeKitRoomName:(id)a1 homeKitMediaSystemIdentifier:(id)a2 mediaRemoteGroupIdentifier:(id)a3 mediaRemoteRouteIdentifier:(id)a4;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
