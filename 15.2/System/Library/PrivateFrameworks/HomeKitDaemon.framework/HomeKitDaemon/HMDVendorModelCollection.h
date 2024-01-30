@class HMDVendorModelEntry, NSMutableSet;

@interface HMDVendorModelCollection : HMFObject

@property (readonly, nonatomic) NSMutableSet *entries;
@property (retain, nonatomic) HMDVendorModelEntry *defaultEntry;

- (void)addEntry:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)lookupModel:(id)a0;
- (id)lookupProductData:(id)a0;

@end
