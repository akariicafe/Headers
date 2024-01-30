@interface CKVUserProfileTools : NSObject

+ (id)mapItemIdsToPriorsFromMetadata:(id)a0;
+ (id)vocabularyItemsOfClass:(Class)a0 fromRawSpeechProfile:(id)a1 metadata:(id)a2 error:(id *)a3;
+ (id)localeFromRawSpeechProfile:(id)a0 error:(id *)a1;
+ (id)parseRawSpeechProfileMetadata:(id)a0 error:(id *)a1;
+ (Class)_converterClassForItemClass:(Class)a0;

@end
