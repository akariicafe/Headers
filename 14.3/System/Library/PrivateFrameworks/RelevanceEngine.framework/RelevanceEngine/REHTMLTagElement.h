@class NSString, NSArray, NSDictionary;

@interface REHTMLTagElement : REHTMLElement {
    NSString *_tag;
    NSString *_content;
    NSArray *_classes;
    NSDictionary *_attributes;
    NSString *_prefix;
    NSString *_suffix;
}

- (id)classes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributes;
- (id)_contentString;
- (id)initWithTag:(id)a0 content:(id)a1;
- (id)_prefixContentString;
- (id)_suffixContentString;
- (id)elementByAddingClass:(id)a0;
- (id)elementByAddingClasses:(id)a0;
- (id)elementBySettingClasses:(id)a0;
- (id)elementBySettingAtttibutes:(id)a0;

@end
