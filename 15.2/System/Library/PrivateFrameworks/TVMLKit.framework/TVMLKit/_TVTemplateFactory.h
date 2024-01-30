@class NSBundle;

@interface _TVTemplateFactory : NSObject {
    NSBundle *_tvmlKitBundle;
}

- (void).cxx_destruct;
- (id)init;
- (void)_registerTemplateControllers;
- (void)_registerCustomAnimators;
- (void)registerProductTemplateURL:(id)a0 forTemplateName:(id)a1 includeParentStyleSheets:(BOOL)a2;
- (void)_registerStyleSheet:(id)a0 forTemplate:(id)a1 parentStyleSheets:(id)a2;

@end
