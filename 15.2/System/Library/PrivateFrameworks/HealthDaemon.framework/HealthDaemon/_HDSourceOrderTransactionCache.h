@class NSArray, HDProfile, NSMutableDictionary;

@interface _HDSourceOrderTransactionCache : NSObject {
    HDProfile *_profile;
    NSArray *_defaultOrderedSources;
    NSMutableDictionary *_orderedSourceIDsByBundleIdentifier;
}

- (void).cxx_destruct;
- (id)init;

@end
