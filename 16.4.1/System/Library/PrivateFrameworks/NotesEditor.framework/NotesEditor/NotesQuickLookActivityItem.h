@class NSArray;
@protocol NotesQuickLookActivityItemDelegate;

@interface NotesQuickLookActivityItem : NSObject

@property (retain, nonatomic) NSArray *previewItems;
@property (nonatomic) unsigned long long firstItemIndex;
@property (weak, nonatomic) id<NotesQuickLookActivityItemDelegate> delegate;

- (void).cxx_destruct;

@end
