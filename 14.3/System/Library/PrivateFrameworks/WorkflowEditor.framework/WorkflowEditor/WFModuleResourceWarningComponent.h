@class NSError;
@protocol WFComponentNavigationContext;

@interface WFModuleResourceWarningComponent : CKCompositeComponent {
    NSError *_resourceError;
    id<WFComponentNavigationContext> _navigationContext;
}

+ (id)newWithResourceError:(id)a0 navigationContext:(id)a1 useImportStyle:(BOOL)a2 importButtonGradient:(id)a3;

- (void).cxx_destruct;
- (void)recoverFromWarning:(id)a0 buttonIndex:(unsigned long long)a1;

@end
