@class NSArray;

@interface REHTMLContainerElement : REHTMLElement {
    NSArray *_elements;
}

- (id)initWithElements:(id)a0;
- (void).cxx_destruct;
- (id)append:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)classes;
- (id)attributes;
- (id)_encodedData;
- (id)elementBySettingClasses:(id)a0;
- (id)elementBySettingAtttibutes:(id)a0;

@end
