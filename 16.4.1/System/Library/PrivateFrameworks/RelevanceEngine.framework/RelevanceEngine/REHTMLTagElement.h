@class NSString, NSArray, NSDictionary;

@interface REHTMLTagElement : REHTMLElement {
    NSString *_tag;
    NSString *_content;
    NSArray *_classes;
    NSDictionary *_attributes;
    NSString *_prefix;
    NSString *_suffix;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributes;
- (id)classes;
- (void).cxx_destruct;
- (id)_contentString;
- (id)_prefixContentString;
- (id)_suffixContentString;
- (id)elementByAddingClass:(id)a0;
- (id)elementByAddingClasses:(id)a0;
- (id)elementBySettingAtttibutes:(id)a0;
- (id)elementBySettingClasses:(id)a0;
- (id)initWithTag:(id)a0 content:(id)a1;

@end
