@class NSMutableArray;

@interface TSWPStorageAnchorAttachmentMigrator : NSObject

@property (retain, nonatomic) NSMutableArray *charIndexPlacementIndexArray;

- (void).cxx_destruct;
- (id)didCopyFromSourceWPStorage:(id)a0 toTemporaryStorage:(id)a1 copiedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)commandsForDidInsertIntoDestinationWPStorage:(id)a0 insertionLocation:(unsigned long long)a1 dolcContext:(id)a2;

@end
