@class NSString;

@interface TSKAddedToDocumentContext_Importing : TSKAddedToDocumentContext {
    NSString *mImporterID;
}

- (id)description;
- (void)dealloc;
- (id)initWithImporterID:(id)a0;
- (id)importerID;

@end
