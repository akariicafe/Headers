@interface HMBModelFieldOption : HMFObject

+ (id)externalRecordField:(id)a0;
+ (id)queryableFieldWithEncodeBlock:(id /* block */)a0 decodeBlock:(id /* block */)a1;
+ (id)excludeFromCloudStorage;
+ (id)encryptedExternalRecordField:(id)a0;
+ (id)queryableFieldWithEncodeBlock:(id /* block */)a0 decodeBlock:(id /* block */)a1 descriptionBlock:(id /* block */)a2;
+ (id)queryableField;

- (void)applyTo:(id)a0;

@end
