@class NSString;

@interface PLCodec : PLManagedObject <PLCodecIdentity>

@property (copy, nonatomic) NSString *fourCharCodeName;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)codecFromFourCharCodeName:(id)a0 createIfMissing:(BOOL)a1 context:(id)a2;
+ (id)commonCodec_HEVC_inContext:(id)a0;
+ (id)commonCodec_H264_inContext:(id)a0;

- (unsigned int)_typeCodeFromString:(id)a0;
- (BOOL)supportsCloudUpload;

@end
