@class NSArray, NSMutableOrderedSet;

@interface CRKIdentifiedProviderRegistry : NSObject {
    NSMutableOrderedSet *_identifiedProviders;
}

@property (readonly, nonatomic) NSArray *identifiedProviders;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)registerIdentifiedProvider:(id)a0;
- (void)unregisterIdentifiedProvider:(id)a0;

@end
