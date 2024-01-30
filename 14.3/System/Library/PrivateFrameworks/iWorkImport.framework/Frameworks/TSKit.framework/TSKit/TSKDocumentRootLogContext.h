@class NSString, TSKDocumentRoot;

@interface TSKDocumentRootLogContext : NSObject <TSULogContext> {
    TSKDocumentRoot *_documentRoot;
}

@property (readonly) NSString *publicString;
@property (readonly) NSString *privateString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDocumentRoot:(id)a0;

@end
