@class NSString, NSURL, INFile, PHAsset;

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
@property (readonly, copy, nonatomic) NSURL *sharedLink;
@property (readonly, copy, nonatomic) NSString *phAssetId;
@property (readonly, nonatomic) PHAsset *phAsset;
@property (readonly, copy, nonatomic) INFile *audioMessageFile;

+ (BOOL)supportsSecureCoding;
+ (id)attachmentWithSharedLink:(id)a0;
+ (id)attachmentWithFile:(id)a0;
+ (id)attachmentWithCurrentLocation;
+ (id)attachmentWithSpeechDataURL:(id)a0;
+ (id)attachmentWithAudioMessageFile:(id)a0;
+ (id)attachmentWithPHAsset:(id)a0;
+ (id)attachmentWithPHAssetId:(id)a0;
+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithCurrentLocation:(BOOL)a0 file:(id)a1 speechDataURL:(id)a2 audioMessageFile:(id)a3 sharedLink:(id)a4 phAssetId:(id)a5;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_intents_enumerateObjectsOfClass:(Class)a0 withBlock:(id /* block */)a1;

@end
