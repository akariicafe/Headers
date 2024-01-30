@class NSString;

@interface CKVMediaEntityMapper : NSObject <CKVItemMapper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemBufferFromExternalVocabularyItem:(id)a0 error:(id *)a1;
+ (long long)targetItemType;
+ (id)_itemBufferFromMediaEntity:(id)a0 error:(id *)a1;
+ (long long)_fieldTypeFromMediaEntityType:(unsigned short)a0;


@end
