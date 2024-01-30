@class NSArray, NSString, REHTMLElement;

@interface REHTMLPageBuilder : NSObject {
    REHTMLElement *_stylesheetsElement;
    REHTMLElement *_scriptsElement;
    REHTMLElement *_pageDescriptionElement;
    REHTMLElement *_navigationLinksElement;
}

@property (retain, nonatomic) NSArray *stylesheets;
@property (retain, nonatomic) NSArray *loadingScripts;
@property (retain, nonatomic) NSString *pageDescription;
@property (retain, nonatomic) NSArray *links;

+ (id)_safariIcon;
+ (id)_headElement;
+ (id)_stylesheetElementWithLocation:(id)a0;
+ (id)_docTypeElement;
+ (id)_bodyElement;
+ (id)_htmlElement;
+ (id)_iosIcon;
+ (id)_largeFavicon;
+ (id)_mainNavigationElement;
+ (id)_scriptElementWithLocation:(id)a0;
+ (id)_smallFavicon;
+ (id)_viewportElement;

- (id)init;
- (void).cxx_destruct;
- (id)pageWithTitle:(id)a0 content:(id)a1 backLocation:(id)a2;

@end
