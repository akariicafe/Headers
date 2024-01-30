@class NSString;

@interface INMediaDestination : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long mediaDestinationType;
@property (readonly, copy, nonatomic) NSString *playlistName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)libraryDestination;
+ (id)playlistDestinationWithName:(id)a0;
+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMediaDestinationType:(long long)a0 playlistName:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
