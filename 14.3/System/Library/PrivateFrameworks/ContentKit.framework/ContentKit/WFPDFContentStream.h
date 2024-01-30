@class NSArray, NSMutableDictionary;

@interface WFPDFContentStream : NSObject

@property (retain, nonatomic) NSMutableDictionary *operatorBlocks;
@property (nonatomic) struct CGPDFOperatorTable { } *operatorTableRef;
@property (retain, nonatomic) NSArray *textContainers;
@property (readonly, nonatomic) struct CGPDFContentStream { } *contentStreamRef;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContentStreamRef:(struct CGPDFContentStream { } *)a0;
- (id)textInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
