@class NSNumber, NSURL, NSString;

@interface INAnnouncement : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *startTime;
@property (readonly, copy, nonatomic) NSNumber *endTime;
@property (readonly, copy, nonatomic) NSURL *speechDataURL;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *speechDataTranscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpeechDataURL:(id)a0 identifier:(id)a1;
- (id)initWithSpeechDataURL:(id)a0 identifier:(id)a1 speechDataTranscription:(id)a2;
- (id)initWithSpeechDataURL:(id)a0 startTime:(id)a1 endTime:(id)a2 identifier:(id)a3;

@end
