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

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBox;
- (void)detach;
- (void)dealloc;
- (id)firstNode;
- (void)insertNode:(id)a0;
- (id)description;
- (id)_text;
- (short)compareBoundaryPoints:(unsigned short)a0 sourceRange:(id)a1;
- (id)enclosingWordRange;
- (id)endPosition;
- (void)selectNodeContents:(id)a0;
- (void)setEnd:(id)a0 offset:(int)a1;
- (void)setEndAfter:(id)a0;
- (void)setStart:(id)a0 offset:(int)a1;
- (void)setStartAfter:(id)a0;
- (id)startPosition;
- (id)textRects;
- (void)collapse:(BOOL)a0;
- (void)selectNode:(id)a0;
- (id)toString;
- (void)setStartBefore:(id)a0;
- (void)expand:(id)a0;
- (id)extractContents;
- (BOOL)intersectsNode:(id)a0;
- (id)cloneContents;
- (id)cloneRange;
- (short)compareBoundaryPoints:(unsigned short)a0 :(id)a1;
- (short)compareNode:(id)a0;
- (short)comparePoint:(id)a0 offset:(int)a1;
- (id)createContextualFragment:(id)a0;
- (void)deleteContents;
- (void)extend:(unsigned int)a0 inDirection:(int)a1;
- (BOOL)isPointInRange:(id)a0 offset:(int)a1;
- (id)lineBoxRects;
- (void)move:(unsigned int)a0 inDirection:(int)a1;
- (struct CGImage { } *)renderedImageForcingBlackText:(BOOL)a0;
- (void)setEnd:(id)a0 :(int)a1;
- (void)setEndBefore:(id)a0;
- (void)setStart:(id)a0 :(int)a1;
- (void)surroundContents:(id)a0;

@end
