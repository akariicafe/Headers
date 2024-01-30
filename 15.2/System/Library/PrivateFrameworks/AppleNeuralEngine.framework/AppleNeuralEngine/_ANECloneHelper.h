@interface _ANECloneHelper : NSObject

+ (BOOL)shouldSkipCloneFor:(id)a0 isEncryptedModel:(BOOL)a1;
+ (id)cloneIfWritable:(id)a0 isEncryptedModel:(BOOL)a1 cloneDirectory:(id)a2;

@end
