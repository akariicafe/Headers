@interface CoreDAVFolderContentsMultiGetTask : CoreDAVContainerMultiGetTask

- (id)copyAdditionalPropElements;
- (id)initWithURLs:(id)a0 atContainerURL:(id)a1 appSpecificDataItemClass:(Class)a2;
- (void)setAdditionalProperties:(id)a0 onDataItem:(id)a1;

@end
