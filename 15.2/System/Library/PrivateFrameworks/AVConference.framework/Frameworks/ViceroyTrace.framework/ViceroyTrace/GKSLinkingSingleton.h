@class NSMutableDictionary;

@interface GKSLinkingSingleton : NSObject {
    NSMutableDictionary *handleSoFar;
}

+ (id)defaultGKSLinkingSingleton;

- (void *)handleForBinaryPath:(id)a0;

@end
