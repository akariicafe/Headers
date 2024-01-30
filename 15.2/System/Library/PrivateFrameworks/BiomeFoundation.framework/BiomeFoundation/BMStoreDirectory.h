@interface BMStoreDirectory : NSObject

+ (id)directoryForRestrictedStreams;
+ (void)setBasePathForTestingWithPath:(id)a0;
+ (void)unsetBasePathForTesting;
+ (id)_directoryForType:(unsigned char)a0;
+ (id)directoryForPublicStreams;
+ (id)directoryForPrivateStreams;

@end
