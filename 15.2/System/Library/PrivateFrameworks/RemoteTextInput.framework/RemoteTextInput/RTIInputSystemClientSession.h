@class RTIDocumentState, RTIDocumentTraits;

@interface RTIInputSystemClientSession : NSObject

@property (retain, nonatomic) RTIDocumentTraits *documentTraits;
@property (retain, nonatomic) RTIDocumentState *documentState;

- (void).cxx_destruct;

@end
