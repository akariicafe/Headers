@class NSMutableOrderedSet;

@interface CRSIdentifiedServiceRegistry : NSObject {
    NSMutableOrderedSet *_identifiedServices;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)registerIdentifiedService:(id)a0;
- (id)identifiedServices;

@end
