@class NSBundle;

@interface _TVTemplateFactory : NSObject {
    NSBundle *_tvmlKitBundle;
}

- (id)init;
- (void).cxx_destruct;
- (void)_registerCustomAnimators;
- (void)_registerStyleSheet:(id)a0 forTemplate:(id)a1 parentStyleSheets:(id)a2;
- (void)_registerTemplateControllers;
- (void)registerProductTemplateURL:(id)a0 forTemplateName:(id)a1 includeParentStyleSheets:(BOOL)a2;

@end
