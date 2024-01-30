@class NSMutableSet, PSSpecifierUpdates;

@interface _PSDeferredUpdates : NSObject

@property (retain, nonatomic) NSMutableSet *searchEntries;
@property (retain, nonatomic) PSSpecifierUpdates *specifierUpdates;
@property (nonatomic) BOOL invalidatedSpecifiers;

+ (id)deferredInvalidationUpdatesWithEntries:(id)a0;
+ (id)deferredUpdatesWithEntries:(id)a0 specifierUpdates:(id)a1;

- (void).cxx_destruct;
- (id)initWithSearchEntries:(id)a0 specifierUpdates:(id)a1 invalidatedSpecifiers:(BOOL)a2;

@end
