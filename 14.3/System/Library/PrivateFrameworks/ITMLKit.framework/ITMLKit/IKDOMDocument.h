@class NSString, IKJSNavigationDocument, IKDOMImplementation, IKDOMElement;
@protocol IKNetworkRequestLoader, IKJSDOMDocumentAppBridge;

@interface IKDOMDocument : IKDOMNode <NSObject, IKJSDOMDocument, _IKJSDOMDocumentProxy, _IKJSDOMDocument, IKJSDOMXPathEvaluator> {
    struct { BOOL hasSetNeedsUpdate; BOOL hasSnapshotImpressions; BOOL hasRecordedImpressions; BOOL hasRecordedImpressionsCallback; BOOL hasRecordedImpressionsMatchingCallback; BOOL hasImpressionsMatchingTag; BOOL hasScrollToTop; BOOL hasRunTest; } _appBridgeFlags;
}

@property (nonatomic, getter=isEmbeddedScriptExecuted) BOOL embeddedScriptExecuted;
@property (nonatomic) unsigned long long itmlIDSequence;
@property (readonly, nonatomic) id<IKNetworkRequestLoader> _requestLoader;
@property (retain, nonatomic, setter=_setDocumentURI:) NSString *_documentURI;
@property (weak, nonatomic) id<IKJSDOMDocumentAppBridge> appBridge;
@property (weak, nonatomic) IKJSNavigationDocument *navigationDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) IKDOMImplementation *implementation;
@property (readonly, retain, nonatomic) IKDOMElement *documentElement;
@property (readonly, retain, nonatomic) NSString *inputEncoding;
@property (readonly, retain, nonatomic) NSString *xmlEncoding;
@property (nonatomic) BOOL xmlStandalone;
@property (retain, nonatomic) NSString *xmlVersion;
@property (nonatomic) BOOL strictErrorChecking;
@property (retain, nonatomic) NSString *documentURI;

+ (struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)_documentWithXMLStr:(id)a0 lsInput:(id)a1 error:(id *)a2;
+ (void)_resetUpdatesForNode:(id)a0;

- (void)replace:(id)a0;
- (long long)nodeType;
- (void)setNeedsUpdate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)createDocumentFragment;
- (id)nodeName;
- (id)getElementsByTagName:(id)a0;
- (id)getElementById:(id)a0;
- (void)scrollToTop;
- (id)createElement:(id)a0;
- (id)createTextNode:(id)a0;
- (id)createComment:(id)a0;
- (id)createCDATASection:(id)a0;
- (id)adoptNode:(id)a0;
- (id)createExpression:(id)a0 :(id)a1;
- (id)evaluate:(id)a0 :(id)a1 :(id)a2 :(long long)a3 :(id)a4;
- (id)snapshotImpressions;
- (id)initWithAppContext:(id)a0;
- (id)initWithAppContext:(id)a0 xmlStr:(id)a1 error:(id *)a2;
- (void)prepareForPresentationWithExtraInfo:(id)a0;
- (id)recordedImpressions:(id)a0;
- (void)runTest:(id)a0 :(id)a1;
- (id)matchingImpressions:(id)a0 :(id)a1;
- (void)recordedImpressions:(id)a0 :(id)a1;
- (void)recordedImpressionsMatching:(id)a0 :(id)a1 :(id)a2;
- (void)_executeEmbeddedScriptWithExtraInfo:(id)a0;
- (void)_updateITMLIDRecursivelyForNodePtr:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
- (void)setITMLIDForNode:(id)a0;
- (id)asPrivateIKJSDOMDocument;
- (id)initWithAppContext:(id)a0 input:(id)a1 error:(id *)a2;
- (id)initWithAppContext:(id)a0 qualifiedName:(id)a1;
- (BOOL)markUpdated;
- (void)swapITMLIDForNode:(id)a0 withITMLIDForNode:(id)a1;

@end
