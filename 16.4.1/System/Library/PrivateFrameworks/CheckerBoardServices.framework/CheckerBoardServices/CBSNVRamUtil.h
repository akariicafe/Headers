@interface CBSNVRamUtil : NSObject

+ (void)clearNVRamVariable:(id)a0;
+ (BOOL)readNVRamVariable:(id)a0 value:(id *)a1;
+ (void)writeNVRamVariable:(id)a0 value:(id)a1;

@end
