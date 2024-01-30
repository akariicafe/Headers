@class CPList;

@interface CPParagraphListItem : NSObject <CPDisposable> {
    struct __CFArray { } *paragraphs;
}

@property (retain, nonatomic) CPList *list;
@property (nonatomic) int number;

- (void)dispose;
- (void)finalize;
- (id)init;
- (void)dealloc;
- (unsigned int)paragraphCount;
- (id)paragraphAtIndex:(unsigned int)a0;
- (void)addParagraph:(id)a0;

@end
