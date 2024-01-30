@class NSString, NSDictionary, IKJSViewModelLink, IKAppDocument;

@interface IKDocumentServiceRequest : IKServiceRequest <IKJSViewModelLinkDelegate> {
    IKJSViewModelLink *_link;
    struct { BOOL hasResponseDictionaryDidChange; BOOL hasDocumentDidChange; } _dsrDelegateFlags;
}

@property (readonly, copy) NSDictionary *responseDictionary;
@property (readonly) IKAppDocument *appDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)onSend;
- (void)setDelegate:(id)a0;
- (void)documentDidChangeForViewModelLink:(id)a0;
- (void)didCloseViewModelLink:(id)a0 withErrorDictionary:(id)a1;
- (void)responseDictionaryDidChangeForViewModelLink:(id)a0;
- (void)onCancel;

@end
