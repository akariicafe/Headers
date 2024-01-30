@class NSString, NSDate;

@interface AFMediaPlaybackStateSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long playbackState;
@property (readonly, copy, nonatomic) NSDate *nowPlayingTimestamp;
@property (readonly, copy, nonatomic) NSString *mediaType;
@property (readonly, copy, nonatomic) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPlaybackState:(long long)a0 nowPlayingTimestamp:(id)a1 mediaType:(id)a2 groupIdentifier:(id)a3;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)serializedBackingStore;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)ad_shortDescription;
- (id)initWithSerializedBackingStore:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
