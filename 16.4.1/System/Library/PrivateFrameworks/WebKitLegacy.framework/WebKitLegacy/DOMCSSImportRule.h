@class NSString, DOMCSSStyleSheet, DOMMediaList;

@interface DOMCSSImportRule : DOMCSSRule

@property (readonly, copy) NSString *href;
@property (readonly) DOMMediaList *media;
@property (readonly) DOMCSSStyleSheet *styleSheet;

@end
