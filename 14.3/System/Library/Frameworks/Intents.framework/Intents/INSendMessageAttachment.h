@class NSString, INFile, NSURL;

@interface INSendMessageAttachment : NSObject <INJSONSerializable, INEnumerable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL currentLocation;
@property (readonly, copy, nonatomic) INFile *file;
@property (readonly, copy, nonatomic) NSURL *speechDataURL;
@property (readonly, copy, nonatomic) INFile *audioMessageFile;

+ (BOOL)supportsSecureCoding;
+ (id)attachmentWithCurrentLocation;
+ (id)attachmentWithFile:(id)a0;
+ (id)attachmentWithSpeechDataURL:(id)a0;
+ (id)attachmentWithAudioMessageFile:(id)a0;
+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithCurrentLocation:(BOOL)a0 file:(id)a1 speechDataURL:(id)a2 audioMessageFile:(id)a3;
- (BOOL)isEqual:(id)a0;
- (BOOL)_intents_enumerateObjectsOfClass:(Class)a0 withBlock:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
