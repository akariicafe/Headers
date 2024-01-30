@class MPUMutableFontDescriptor, NSMutableArray;

@interface MPUFontDescriptorCache : NSObject {
    MPUMutableFontDescriptor *_reusableMutableFontDescriptor;
    unsigned long long _maximumCapacity;
    NSMutableArray *_orderedCachedFontDescriptors;
}

+ (id)sharedFontDescriptorCache;

- (id)cachedImmutableFontDescriptorForConfigurationBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)a0;
- (id)cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)a0;
- (id)_cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)a0;

@end
