@class NSMutableOrderedSet;

@interface CRSIdentifiedServiceRegistry : NSObject {
    NSMutableOrderedSet *_identifiedServices;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)registerIdentifiedService:(id)a0;
- (id)identifiedServices;

@end
