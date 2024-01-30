@class NSString, NSArray, _TtC21DocumentUnderstanding19DUDocumentUIElement;

@interface DUDocumentUIElementObjC : NSObject {
    _TtC21DocumentUnderstanding19DUDocumentUIElement *_underlyingElement;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *classDescriptor;
@property (nonatomic) float fontSize;
@property (copy, nonatomic) NSArray *superviewClassNames;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameInWindow;
@property (nonatomic) struct CGPoint { double x0; double x1; } absoluteOriginOnScreen;
@property (nonatomic) BOOL isOnScreen;
@property (nonatomic) BOOL isValidForContentExtraction;

- (id)init;
- (void).cxx_destruct;

@end
