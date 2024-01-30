@class NSString;

@interface CKVContactMapper : NSObject <CKVItemMapper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemBufferFromExternalVocabularyItem:(id)a0 error:(id *)a1;
+ (long long)targetItemType;
+ (id)_itemBufferFromContact:(id)a0 error:(id *)a1;
+ (BOOL)_addLabeledFieldsOfType:(long long)a0 labeledValues:(id)a1 labelOnly:(BOOL)a2 builder:(id)a3 error:(id *)a4;
+ (id)_flattenLabeledValue:(id)a0;


@end
