@class CPList;

@interface CPParagraphListItem : NSObject <CPDisposable> {
    struct __CFArray { } *paragraphs;
}

@property (retain, nonatomic) CPList *list;
@property (nonatomic) int number;

- (void)finalize;
- (void)dispose;
- (void)dealloc;
- (id)init;
- (void)addParagraph:(id)a0;
- (id)paragraphAtIndex:(unsigned int)a0;
- (unsigned int)paragraphCount;

@end
