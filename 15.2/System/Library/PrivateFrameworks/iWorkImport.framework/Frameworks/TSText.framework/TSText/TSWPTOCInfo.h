@class NSArray, NSSet, NSString, TSWPTOCSettings, TSWPTOCPartitioner;

@interface TSWPTOCInfo : TSWPShapeInfo <TSWPTextualEquivalentProvider> {
    TSWPTOCPartitioner *_partitioner;
}

@property (retain, nonatomic, setter=setTOCEntries:) NSArray *tocEntries;
@property (readonly, nonatomic) NSArray *visibleTOCEntries;
@property (retain, nonatomic, setter=setTOCSettings:) TSWPTOCSettings *tocSettings;
@property (nonatomic) BOOL shouldSyncTOCSettingsWithTOCNavigator;
@property (retain, nonatomic) NSArray *pageNumberRanges;
@property (readonly, nonatomic) NSSet *paragraphStylesShownInTOC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPartitionInline;

- (BOOL)isSelectable;
- (unsigned int)elementKind;
- (void).cxx_destruct;
- (void)acceptVisitor:(id)a0;
- (Class)repClass;
- (id)copyWithContext:(id)a0;
- (BOOL)textIsVertical;
- (BOOL)allowsTitle;
- (id)referencedStyles;
- (BOOL)supportsAttachedComments;
- (Class)editorClass;
- (id)partitioner;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)allowsCaption;
- (BOOL)supportsDropCapsInChildStorages;
- (BOOL)wantsPositionFixedWhenCopying;
- (void)i_setTOCEntries:(id)a0;
- (void)regenerateStorageContent;
- (void)i_setTOCSettings:(id)a0;
- (BOOL)p_startingTOCIsRTLForEntries:(id)a0;
- (void)resetStorageStyles;
- (void)loadTOCInfoMessage:(const void *)a0 unarchiver:(id)a1;
- (void)saveTOCInfoMessage:(void *)a0 archiver:(id)a1;
- (id)textualEquivalent;
- (id)containedStorageFormattedUsingParagraphStyle:(id)a0;
- (id)containedStorageFormattedUsingParagraphStyles;

@end
