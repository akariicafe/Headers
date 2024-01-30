@class NSArray;

@interface REHTMLContainerElement : REHTMLElement {
    NSArray *_elements;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributes;
- (id)classes;
- (void).cxx_destruct;
- (id)initWithElements:(id)a0;
- (id)_encodedData;
- (id)append:(id)a0;
- (id)elementBySettingAtttibutes:(id)a0;
- (id)elementBySettingClasses:(id)a0;

@end
