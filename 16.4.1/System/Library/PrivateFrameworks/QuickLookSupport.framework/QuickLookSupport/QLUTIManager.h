@interface QLUTIManager : NSObject

+ (id)claimedPDFTypes;
+ (id)claimedCSVTypes;
+ (id)_preferredParentUTIof:(id)a0 fromParents:(id)a1;
+ (id)_recursiveValueInDictionary:(id)a0 forType:(id)a1 alreadySeenUTIs:(id)a2 matchedValueToTypeBlock:(id /* block */)a3 validationBlock:(id /* block */)a4;
+ (id)_searchParentTypesFor:(id)a0 fromDictionary:(id)a1 alreadySeenUTIs:(id)a2 matchedValueToTypeBlock:(id /* block */)a3 validationBlock:(id /* block */)a4;
+ (id)_selectParentUTIForUTI:(id)a0 fromParentUTIs:(id)a1 dictionary:(id)a2 alreadySeenUTIs:(id)a3 matchedValueToTypeBlock:(id /* block */)a4 validationBlock:(id /* block */)a5;
+ (id)claimedAVTypes;
+ (id)claimedCalendarTypes;
+ (id)claimedContactTypes;
+ (id)claimedImageTypes;
+ (id)claimedLivePhotoTypes;
+ (id)claimedOfficeTypes;
+ (id)claimedTextTypes;
+ (id)claimedWebViewTypes;
+ (id)claimediWorkTypes;
+ (id)findAndStoreValueInTypeKeyedDictionary:(id)a0 forType:(id)a1 withDescription:(id)a2 withQueue:(id)a3 validationBlock:(id /* block */)a4;
+ (id)internallyClaimedTypes;
+ (id)screentimeiWorkBundleForUTI:(id)a0;
+ (id)textGeneratorSupportedTypes;
+ (id)typesForWhichExternalGeneratorsArePreferred;
+ (id)valueInTypeKeyedDictionary:(id)a0 forType:(id)a1;

@end
