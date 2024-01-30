@class NSArray, REHTMLElement;

@interface REHTMLParentElement : REHTMLElement {
    REHTMLElement *_parent;
    NSArray *_children;
}

- (id)classes;
- (void).cxx_destruct;
- (id)addChildren:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributes;
- (id)_encodedData;
- (id)elementBySettingClasses:(id)a0;
- (id)elementBySettingAtttibutes:(id)a0;
- (id)initWithParents:(id)a0 children:(id)a1;

@end
