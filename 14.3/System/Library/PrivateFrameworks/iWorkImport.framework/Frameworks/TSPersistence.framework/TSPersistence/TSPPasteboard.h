@class NSString, NSArray, UIPasteboard;

@interface TSPPasteboard : NSObject <TSPDecoder> {
    UIPasteboard *_pasteboard;
}

@property (readonly, nonatomic) unsigned long long pasteboardItemMaxSize;
@property (copy, nonatomic) NSString *string;
@property (readonly, nonatomic) NSArray *strings;
@property (readonly, nonatomic) NSArray *richTextStrings;
@property (readonly, nonatomic) NSArray *URLs;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long changeCount;
@property (readonly, nonatomic) BOOL isSmartCopy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pasteboardWithUniqueName;
+ (id)pasteboardWithName:(id)a0 create:(BOOL)a1;
+ (id)generalPasteboard;
+ (id)activePasteboardsQueue;
+ (id)activePasteboards;
+ (Class)pasteboardClass;
+ (id)activePasteboardForName:(id)a0;
+ (id)pasteboardWithPasteboard:(id)a0;

- (void).cxx_destruct;
- (void)addItems:(id)a0;
- (BOOL)containsPasteboardTypes:(id)a0;
- (id)dataForPasteboardType:(id)a0;
- (id)pasteboardTypes;
- (id)valueForPasteboardType:(id)a0;
- (id)pasteboardTypesForItemSet:(id)a0;
- (id)valuesForPasteboardType:(id)a0 inItemSet:(id)a1;
- (id)dataForPasteboardType:(id)a0 inItemSet:(id)a1;
- (long long)clearContents;
- (oneway void)invalidate;
- (id)newReadChannelForMetadata;
- (id)newReadChannelForRootObjectComponent;
- (id)newReadChannelForDataWithIdentifier:(long long)a0 info:(id)a1;
- (id)initWithGeneralPasteboard;
- (id)initWithPasteboardName:(id)a0 create:(BOOL)a1;
- (id)initWithUniquePasteboardName;
- (id)initWithNativePasteboard:(id)a0;
- (void)addItems:(id)a0 isSmartCopy:(BOOL)a1;
- (id)importableRichTextTypes;
- (BOOL)containsAnyPasteboardTypeInArray:(id)a0;
- (BOOL)canLoadItemsOfClass:(Class)a0;
- (id)stringForPasteboardType:(id)a0;
- (void)addData:(id)a0 forPasteboardType:(id)a1;
- (id)stringsForPasteboardType:(id)a0 inItemSet:(id)a1;
- (id)importableImageTypes;
- (BOOL)containsNativePasteboardTypes;
- (BOOL)containsImportableRichTextTypes;
- (BOOL)containsImportableTextTypes;

@end
