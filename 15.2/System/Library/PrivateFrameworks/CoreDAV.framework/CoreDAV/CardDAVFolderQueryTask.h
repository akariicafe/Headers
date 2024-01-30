@interface CardDAVFolderQueryTask : CoreDAVContainerQueryTask

- (id)initWithSearchTerms:(id)a0 searchLimit:(unsigned long long)a1 atURL:(id)a2 appSpecificDataItemClass:(Class)a3;
- (void)addFiltersToXMLData:(id)a0;

@end
