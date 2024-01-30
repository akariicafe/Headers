@class NSString;

@interface _ECParsedHTMLTag : _ECParsedHTMLNode {
    NSString *_tagName;
}

- (void)dealloc;
- (id)description;
- (id)tagName;
- (void)setTagName:(id)a0;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)a0;

@end
