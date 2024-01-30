@class NSString;

@interface CKVRawSpeechProfileConverterAppInfo : NSObject <CKVRawSpeechProfileConverter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)speechCategoryId;
+ (id)vocabularyItemFromSpeechWords:(id)a0 metadata:(id)a1 speechNamespace:(id)a2 error:(id *)a3;
+ (id)_placeholderBundleIdWithAppName:(id)a0;


@end
