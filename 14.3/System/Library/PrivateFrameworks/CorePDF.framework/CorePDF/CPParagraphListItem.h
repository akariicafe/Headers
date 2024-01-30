@class CPList;

@interface CPParagraphListItem : NSObject <CPDisposable> {
    struct __CFArray { } *paragraphs;
}

@property (retain, nonatomic) CPList *list;
@property (nonatomic) int number;

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (unsigned int)paragraphCount;
- (id)paragraphAtIndex:(unsigned int)a0;
- (void)addParagraph:(id)a0;

@end
