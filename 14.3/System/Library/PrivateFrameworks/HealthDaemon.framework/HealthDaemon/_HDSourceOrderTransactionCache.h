@class NSArray, HDProfile, NSMutableDictionary;

@interface _HDSourceOrderTransactionCache : NSObject {
    HDProfile *_profile;
    NSArray *_defaultOrderedSources;
    NSMutableDictionary *_orderedSourceIDsByBundleIdentifier;
}

- (id)initWithProfile:(id)a0;
- (id)init;
- (id)defaultOrderSourcesWithDatabase:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)orderedSourceIDsForBundleIdentifier:(id)a0 database:(id)a1 error:(id *)a2;
- (id)_orderedSourceIDsForBundleIdentifier:(id)a0 database:(id)a1 error:(id *)a2;

@end
