@class AVLazyValueLoadingMetadataItemInternal;

@interface AVLazyValueLoadingMetadataItem : AVMetadataItem {
    AVLazyValueLoadingMetadataItemInternal *_lazyMetadataItem;
}

+ (id)metadataItemWithPropertiesOfMetadataItem:(id)a0 valueLoadingHandler:(id /* block */)a1;

- (id)dataType;
- (id)_initWithFigMetadataDictionary:(id)a0 valueLoadingHandler:(id /* block */)a1;
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)a0;
- (long long)_valueStatus;
- (void)_waitForLoadingOfValueDependentKey:(id)a0;
- (void)_valueRequestDidFinish;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (id)value;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;

@end
