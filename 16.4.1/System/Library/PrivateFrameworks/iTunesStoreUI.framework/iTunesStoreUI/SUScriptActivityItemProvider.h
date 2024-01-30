@class SUActivityItemProvider, NSString, SUScriptFunction, WebScriptObject;

@interface SUScriptActivityItemProvider : SUScriptObject <SUActivityItemProviderDelegate> {
    id _item;
    id /* block */ _itemBlock;
    SUScriptFunction *_itemFunction;
    int _loadState;
    NSString *_mimeType;
    SUActivityItemProvider *_nativeProvider;
    int _previewLoadState;
}

@property (readonly) SUActivityItemProvider *nativeActivityItemProvider;
@property (readonly) NSString *activityType;
@property (retain) WebScriptObject *itemFunction;
@property (readonly) NSString *MIMEType;
@property double progress;
@property (copy) NSString *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)setItem:(id)a0;
- (id)initWithMIMEType:(id)a0;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)_finishItemWithItem:(id)a0;
- (void)_finishPreviewWithImage:(id)a0;
- (id)_newPlaceholderWithMIMEType:(id)a0;
- (void)activityItemProvider:(id)a0 provideItemUsingBlock:(id /* block */)a1;
- (id)activitySupportsMIMEType:(id)a0;
- (void)setPreviewImageWithURLString:(id)a0;

@end
