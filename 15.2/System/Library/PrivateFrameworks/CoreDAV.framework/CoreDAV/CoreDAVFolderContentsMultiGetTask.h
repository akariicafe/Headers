@interface CoreDAVFolderContentsMultiGetTask : CoreDAVContainerMultiGetTask

- (id)copyAdditionalPropElements;
- (void)setAdditionalProperties:(id)a0 onDataItem:(id)a1;
- (id)initWithURLs:(id)a0 atContainerURL:(id)a1 appSpecificDataItemClass:(Class)a2;

@end
