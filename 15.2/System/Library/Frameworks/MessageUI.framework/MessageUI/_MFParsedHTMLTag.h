@class NSString;

@interface _MFParsedHTMLTag : _MFParsedHTMLNode {
    NSString *_tagName;
}

- (id)tagName;
- (id)description;
- (void)dealloc;
- (void)setTagName:(id)a0;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)a0;

@end
