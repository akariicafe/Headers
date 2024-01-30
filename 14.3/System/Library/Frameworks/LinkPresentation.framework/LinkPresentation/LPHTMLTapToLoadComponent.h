@class NSString, DOMElement;

@interface LPHTMLTapToLoadComponent : LPHTMLComponent <DOMEventListener> {
    DOMElement *_tapToLoadLabelElement;
    DOMElement *_tapToLoadSpinnerElement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleSet;
+ (id)ruleDictionaryForStyle:(id)a0;
+ (id)ruleDictionaryForStyleWithDarkInterface:(id)a0;

@end
