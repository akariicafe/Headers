@class NSMutableArray, EDResources, EDWorkbook;

@interface EDProcessor : NSObject {
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    NSMutableArray *mObjects;
}

- (void).cxx_destruct;
- (BOOL)isObjectSupported:(id)a0;
- (void)applyProcessorToObject:(id)a0 sheet:(id)a1;
- (id)initWithWorkbook:(id)a0;
- (void)markObjectForPostProcessing:(id)a0;
- (void)applyProcessorWithSheet:(id)a0;

@end
