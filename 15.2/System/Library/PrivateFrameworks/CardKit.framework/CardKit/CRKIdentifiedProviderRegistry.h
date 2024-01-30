@class NSArray, NSMutableOrderedSet;

@interface CRKIdentifiedProviderRegistry : NSObject {
    NSMutableOrderedSet *_identifiedProviders;
}

@property (readonly, nonatomic) NSArray *identifiedProviders;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)registerIdentifiedProvider:(id)a0;
- (void)unregisterIdentifiedProvider:(id)a0;

@end
