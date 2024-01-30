@class WebArchive, NSString, DOMNode;

@interface DOMRange : DOMObject

@property (readonly, nonatomic) WebArchive *webArchive;
@property (readonly, copy, nonatomic) NSString *markupString;
@property (readonly) DOMNode *startContainer;
@property (readonly) int startOffset;
@property (readonly) DOMNode *endContainer;
@property (readonly) int endOffset;
@property (readonly) BOOL collapsed;
@property (readonly) DOMNode *commonAncestorContainer;
@property (readonly, copy) NSString *text;

+ (id)rangeForFirstPosition:(id)a0 second:(id)a1;

- (id)_text;
- (void)insertNode:(id)a0;
- (void)detach;
- (id)firstNode;
- (id)toString;
- (id)enclosingWordRange;
- (id)description;
- (void)collapse:(BOOL)a0;
- (void)setEnd:(id)a0 offset:(int)a1;
- (void)setStart:(id)a0 offset:(int)a1;
- (void)setStartAfter:(id)a0;
- (short)compareBoundaryPoints:(unsigned short)a0 sourceRange:(id)a1;
- (void)expand:(id)a0;
- (id)endPosition;
- (void)selectNodeContents:(id)a0;
- (id)textRects;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBox;
- (void)selectNode:(id)a0;
- (void)setEnd:(id)a0 :(int)a1;
- (void)setEndAfter:(id)a0;
- (id)startPosition;
- (void)setStartBefore:(id)a0;
- (id)lineBoxRects;
- (struct CGImage { } *)renderedImageForcingBlackText:(BOOL)a0;
- (void)setEndBefore:(id)a0;
- (void)deleteContents;
- (id)extractContents;
- (id)cloneContents;
- (void)surroundContents:(id)a0;
- (id)cloneRange;
- (id)createContextualFragment:(id)a0;
- (short)compareNode:(id)a0;
- (BOOL)intersectsNode:(id)a0;
- (short)comparePoint:(id)a0 offset:(int)a1;
- (BOOL)isPointInRange:(id)a0 offset:(int)a1;
- (void)setStart:(id)a0 :(int)a1;
- (short)compareBoundaryPoints:(unsigned short)a0 :(id)a1;
- (void)move:(unsigned int)a0 inDirection:(int)a1;
- (void)extend:(unsigned int)a0 inDirection:(int)a1;

@end
