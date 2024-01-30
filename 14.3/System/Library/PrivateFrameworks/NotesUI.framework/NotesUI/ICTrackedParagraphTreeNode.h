@class ICTrackedParagraph, NSString, NSMutableArray;

@interface ICTrackedParagraphTreeNode : NSObject

@property (retain, nonatomic) ICTrackedParagraph *trackedParagraph;
@property (retain, nonatomic) NSMutableArray *children;
@property (weak, nonatomic) ICTrackedParagraphTreeNode *parent;
@property (nonatomic) BOOL checked;
@property (nonatomic) long long indent;
@property (retain, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *recurisiveDescription;

+ (id)nodeFromTrackedParagraph:(id)a0 textView:(id)a1;
+ (id)placeholderNodeWithIndentation:(unsigned long long)a0;

- (void)addChild:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)recursivlySortCheckedItemsToBottom;
- (id)linerizedRepresentation;
- (void)recursivlyAddTrackedParagraphsToArray:(id)a0;
- (void)recursivlyAddDescriptionToString:(id)a0;

@end
