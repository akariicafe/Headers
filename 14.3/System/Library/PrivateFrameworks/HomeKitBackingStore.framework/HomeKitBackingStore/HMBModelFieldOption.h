@interface HMBModelFieldOption : HMFObject

+ (id)externalRecordField:(id)a0;
+ (id)queryableField;
+ (id)encryptedExternalRecordField:(id)a0;
+ (id)excludeFromCloudStorage;
+ (id)queryableFieldWithEncodeBlock:(id /* block */)a0 decodeBlock:(id /* block */)a1 descriptionBlock:(id /* block */)a2;
+ (id)queryableFieldWithEncodeBlock:(id /* block */)a0 decodeBlock:(id /* block */)a1;

- (void)applyTo:(id)a0;

@end
