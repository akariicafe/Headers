@class CPRMList, NSString, NSAttributedString, NSMutableArray;

@interface CPReadingModel : NSObject {
    long long _count;
    struct { long long x0; long long x1; } *_textLineRanges;
    struct { long long x0; long long x1; } *_stringLineRanges;
    long long *_pageNumbers;
    struct { long long location; long long length; } _pageRange;
    struct CGPDFDocument { } *_document;
    long long _numberOfLines;
    long long _numberOfParagraphs;
    long long _numberOfColumns;
    long long _numberOfLayoutAreas;
    NSString *_cachedString;
    NSAttributedString *_cachedAttributedString;
    long long _pageNumber;
    long long _pos;
    NSMutableArray *_tables;
    NSMutableArray *_lists;
    NSMutableArray *_headings;
    long long _pageNumberMemo;
    struct { long long location; long long length; } _textRangeMemo;
    struct _NSRange { unsigned long long location; unsigned long long length; } _rangeMemo;
    CPRMList *_currentList;
}

- (void)clearCache;
- (id)attributedString;
- (void)dealloc;
- (id)tables;
- (id)stringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addRange:(struct { long long x0; long long x1; })a0;
- (id)string;
- (unsigned long long)lineCount;
- (id)initWithDocument:(struct CGPDFDocument { } *)a0;
- (id)headings;
- (id)lists;
- (id)attributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)buildModel:(struct CGPDFDocument { } *)a0;
- (void)buildModel:(struct CGPDFDocument { } *)a0 pageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addTable:(struct CGPDFNode { } *)a0 layout:(struct CGPDFLayout { } *)a1;
- (void)tables:(struct CGPDFNode { } *)a0 layout:(struct CGPDFLayout { } *)a1;
- (struct CGPDFNode { } *)firstParagraphInList:(id)a0;
- (long long)findParagraph:(struct CGPDFNode { } *)a0 inListArray:(id)a1;
- (void)addListsInColumn:(struct CGPDFNode { } *)a0;
- (void)lists:(struct CGPDFNode { } *)a0 layout:(struct CGPDFLayout { } *)a1;
- (void)headings:(struct CGPDFNode { } *)a0 layout:(struct CGPDFLayout { } *)a1;
- (void)visitLayoutAreas:(struct CGPDFNode { } *)a0 completion:(id /* block */)a1;
- (void)stringLineRanges;
- (id)stringForLine:(unsigned long long)a0;
- (id)attributedStringForLine:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })stringRangeForLine:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pdfBoundsForCursor:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)lineForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pdfBoundsForNewLine:(struct { long long x0; long long x1; })a0;
- (struct { long long x0; long long x1; })mapStringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })linesForPage:(unsigned long long)a0;
- (unsigned long long)pageNumberForLine:(unsigned long long)a0;
- (id)initWithDocument:(struct CGPDFDocument { } *)a0 withPageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (long long)indexOfFirstLineOnPage:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeForLine:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pdfBoundsForLine:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForLine:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pdfBoundsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct { long long x0; long long x1; })textRangeForStringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })stringRangeForTextRange:(struct { long long x0; long long x1; })a0 onPageNumber:(unsigned long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })pageRangeForStringRange:(struct { long long x0; long long x1; })a0;
- (long long)lineIndexForPoint:(struct CGPoint { double x0; double x1; })a0 onPage:(unsigned long long)a1;
- (void)visitTextLines:(struct CGPDFNode { } *)a0 completion:(id /* block */)a1;
- (void)visitParagraphs:(struct CGPDFNode { } *)a0 completion:(id /* block */)a1;
- (void)visitColumns:(struct CGPDFNode { } *)a0 completion:(id /* block */)a1;
- (unsigned long long)addRangeForLine:(unsigned long long)a0 from:(unsigned long long)a1;
- (void)incrementLineCount;
- (void)incrementParagraphCount;
- (void)incrementColumnCount;
- (void)increamentLayoutAreaCount;

@end
