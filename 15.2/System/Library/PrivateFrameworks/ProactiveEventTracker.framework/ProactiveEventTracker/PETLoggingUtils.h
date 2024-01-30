@interface PETLoggingUtils : NSObject

+ (id)keyStringForEvent:(id)a0 featureId:(id)a1 stringifiedProperties:(id)a2 metaData:(id)a3;
+ (id)domainStringForEvent:(id)a0 featureId:(id)a1;
+ (id)keyStringForStringifiedPairs:(id)a0;
+ (void)_pushToBuffer:(id)a0 keyStringForStringifiedPairs:(id)a1;
+ (id)messageKeyStringForKey:(id)a0;

@end
