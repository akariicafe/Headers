@interface PETLoggingUtils : NSObject

+ (void)_pushToBuffer:(id)a0 keyStringForStringifiedPairs:(id)a1;
+ (id)messageKeyStringForKey:(id)a0;
+ (id)keyStringForStringifiedPairs:(id)a0;
+ (id)domainStringForEvent:(id)a0 featureId:(id)a1;
+ (id)keyStringForEvent:(id)a0 featureId:(id)a1 stringifiedProperties:(id)a2 metaData:(id)a3;

@end
