@class NSArray;

@interface _PXWidgetCompositionElementScanner : NSObject <_PXWidgetCompositionRow> {
    long long _scanLocation;
    struct _NSRange { unsigned long long location; unsigned long long length; } _scannedRowRange;
}

@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic) id /* block */ wantsEdgeToEdgeLayoutBlock;
@property (nonatomic) double referenceWidth;
@property (nonatomic) double interColumnSpacing;
@property (nonatomic) long long maximumNumberOfColumns;
@property (readonly, nonatomic, getter=isAtEnd) BOOL atEnd;
@property (readonly, nonatomic) long long numberOfColumns;

- (void)enumerateElementsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_wantsEdgeToEdgeLayoutForElement:(id)a0;
- (BOOL)scanRow:(out id *)a0;

@end
