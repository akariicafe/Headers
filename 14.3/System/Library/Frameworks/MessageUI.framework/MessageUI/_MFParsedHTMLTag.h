@class NSString;

@interface _MFParsedHTMLTag : _MFParsedHTMLNode {
    NSString *_tagName;
}

- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)a0;
- (id)tagName;
- (void)dealloc;
- (id)description;
- (void)setTagName:(id)a0;

@end
