@class NSString, NSMapTable;

@interface TSDImageProviderPool : NSObject <TSPDataCullingListener> {
    NSMapTable *mImageDataUniqueIdentifierToImageProviderMap;
    unsigned long long mOpenFileDescriptorLimit;
    BOOL mHaveRaisedFileDescriptorLimit;
}

@property (class, readonly, nonatomic) TSDImageProviderPool *sharedPool;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)p_providerClassForData:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)providerForData:(id)a0 shouldValidate:(BOOL)a1;
- (void)addInterestInProviderForData:(id)a0;
- (void)flushImageProviders;
- (void)p_applicationDidEnterBackground:(id)a0;
- (void)p_didReceiveMemoryWarning:(id)a0;
- (void)p_freeFileDescriptorsWithProviderCount:(unsigned long long)a0;
- (id)p_providerForData:(id)a0 temporary:(BOOL)a1 shouldValidate:(BOOL)a2;
- (unsigned long long)p_providerLimitForFileDescriptorLimit:(unsigned long long)a0;
- (unsigned long long)p_removeProvidersWithZeroInterest;
- (void)p_updateFileDescriptorLimit;
- (void)removeInterestInProviderForData:(id)a0;
- (id)temporaryProviderForData:(id)a0 shouldValidate:(BOOL)a1;
- (void)willCloseDocumentContext:(id)a0;
- (void)didReplaceContentsOfDataWithUniqueIdentifier:(id)a0 flags:(unsigned long long)a1;
- (void)willCullDataWithUniqueIdentifier:(id)a0 flags:(unsigned long long)a1;
- (void)flushProvidersToFreeMemoryIfNecessaryExcludingProvider:(id)a0;
- (BOOL)isBitmapData:(id)a0;
- (void)p_clearCacheForDataUniqueIdentifier:(id)a0 flags:(unsigned long long)a1;
- (unsigned long long)p_estimatedSizeOfAllProviders;
- (void)p_flushProvidersWithNoOneActivelyHoldingAReference;
- (void)p_flushRandomImageProvidersExcludingProvider:(id)a0;
- (unsigned long long)p_imageProviderMemoryThreshold;
- (BOOL)p_rngSaysToFlush;

@end
