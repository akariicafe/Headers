@class NSString, NSMutableArray;

@interface _MFParsedHTMLNode : NSObject <MFMessageBodyTreeNode, MFMessageBodyConsumableInnerTextNode> {
    NSMutableArray *_childNodes;
}

@property (weak, nonatomic) _MFParsedHTMLNode *parentNode;
@property (weak, nonatomic) _MFParsedHTMLNode *nextSibling;
@property (readonly, nonatomic) BOOL hasChildNodes;
@property (readonly, nonatomic) _MFParsedHTMLNode *firstChild;
@property (readonly, nonatomic) _MFParsedHTMLNode *lastChild;
@property (readonly, nonatomic) NSString *tagName;
@property (retain, nonatomic) NSString *htmlString;
@property (nonatomic) unsigned long long startLocation;
@property (nonatomic) unsigned long long endLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectDescendanceIntoArray:(id)a0;
- (void)addRecursiveDescriptionWithLevel:(unsigned long long)a0 toString:(id)a1;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)a0;
- (id)copyMutableConsumableNodesAndAppendInnerTextToStringAccumulator:(id)a0;
- (id)init;
- (void)dealloc;
- (void)appendChild:(id)a0;
- (id)recursiveDescription;

@end
