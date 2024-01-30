@class NSString;

@interface CKVCustomTermMapper : NSObject <CKVItemMapper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemBufferFromExternalVocabularyItem:(id)a0 error:(id *)a1;
+ (long long)targetItemType;
+ (id)_itemBufferFromCustomTerm:(id)a0 error:(id *)a1;
+ (long long)fieldTypeFromCustomType:(unsigned short)a0;
+ (unsigned short)customTypeFromFieldType:(long long)a0;
+ (id)customTermFromItem:(id)a0 error:(id *)a1;


@end
