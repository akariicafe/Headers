@class NSArray, NSNumber, NSString;

@interface INWholeHouseAudioMetadata : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *speakerNames;
@property (readonly, copy, nonatomic) NSArray *speakerRooms;
@property (readonly, copy, nonatomic) NSArray *permanentNames;
@property (readonly, copy, nonatomic) NSArray *intentSpeakerNames;
@property (readonly, copy, nonatomic) NSArray *intentSpeakerRooms;
@property (readonly, copy, nonatomic) NSArray *intentDestinationSpeakers;
@property (readonly, copy, nonatomic) NSArray *intentPermanentNames;
@property (readonly, copy, nonatomic) NSArray *spokenEntityTypes;
@property (readonly, copy, nonatomic) NSArray *spokenEntityNames;
@property (readonly, copy, nonatomic) NSNumber *numberOfHomeAutomationWords;
@property (readonly, copy, nonatomic) NSNumber *isAllSpeakers;
@property (readonly, copy, nonatomic) NSNumber *isPauseOrStop;
@property (readonly, copy, nonatomic) NSNumber *isWholeHouseAudioCommand;
@property (readonly, copy, nonatomic) NSNumber *isInHere;
@property (readonly, copy, nonatomic) NSNumber *hasExcept;
@property (readonly, copy, nonatomic) NSNumber *isParticipatingSpeaker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)initWithSpeakerNames:(id)a0 speakerRooms:(id)a1 permanentNames:(id)a2 intentSpeakerNames:(id)a3 intentSpeakerRooms:(id)a4 intentDestinationSpeakers:(id)a5 intentPermanentNames:(id)a6 spokenEntityTypes:(id)a7 spokenEntityNames:(id)a8 numberOfHomeAutomationWords:(id)a9 isAllSpeakers:(id)a10 isPauseOrStop:(id)a11 isWholeHouseAudioCommand:(id)a12 isInHere:(id)a13 hasExcept:(id)a14 isParticipatingSpeaker:(id)a15;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
