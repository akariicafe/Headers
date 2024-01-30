@class NSDictionary;

@interface TSPTemporaryObjectContextDelegateWithPackageDataForWrite : TSPTemporaryObjectContextDelegate {
    NSDictionary *_packageDataForWrite;
    NSDictionary *_additionalDocumentPropertiesForWrite;
}

- (void).cxx_destruct;
- (id)additionalDocumentPropertiesForWrite;
- (id)packageDataForWrite;
- (id)initWithPackageDataForWrite:(id)a0 additionalDocumentPropertiesForWrite:(id)a1;

@end
