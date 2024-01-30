@class NSString, TSUPointerKeyDictionary;

@interface TSDImageProviderPool : NSObject <TSPDataCullingListener> {
    TSUPointerKeyDictionary *mImageDataUniqueIdentifierToImageProviderMap;
    unsigned long long mOpenFileDescriptorLimit;
    BOOL mHaveRaisedFileDescriptorLimit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)sharedPool;
+ (Class)p_providerClassForData:(id)a0;

- (id)init;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)retain;
- (void)p_didReceiveMemoryWarning:(id)a0;
- (id)temporaryProviderForData:(id)a0 shouldValidate:(BOOL)a1;
- (void)addInterestInProviderForData:(id)a0;
- (void)removeInterestInProviderForData:(id)a0;
- (id)providerForData:(id)a0 shouldValidate:(BOOL)a1;
- (void)p_updateFileDescriptorLimit;
- (id)p_providerForData:(id)a0 temporary:(BOOL)a1 shouldValidate:(BOOL)a2;
- (unsigned long long)p_providerLimitForFileDescriptorLimit:(unsigned long long)a0;
- (void)p_freeFileDescriptorsWithProviderCount:(unsigned long long)a0;
- (unsigned long long)p_removeProvidersWithZeroInterest;
- (void)willCloseDocumentContext:(id)a0;
- (void)flushImageProviders;
- (BOOL)p_rngSaysToFlush;
- (void)p_clearCacheForDataUniqueIdentifier:(id)a0 flags:(unsigned long long)a1;
- (unsigned long long)p_estimatedSizeOfAllProviders;
- (unsigned long long)p_imageProviderMemoryThreshold;
- (void)p_flushRandomImageProvidersExcludingProvider:(id)a0;
- (void)willCullDataWithUniqueIdentifier:(id)a0 flags:(unsigned long long)a1;
- (void)didReplaceContentsOfDataWithUniqueIdentifier:(id)a0 flags:(unsigned long long)a1;
- (BOOL)isBitmapData:(id)a0;
- (void)flushProvidersToFreeMemoryIfNecessaryExcludingProvider:(id)a0;

@end
