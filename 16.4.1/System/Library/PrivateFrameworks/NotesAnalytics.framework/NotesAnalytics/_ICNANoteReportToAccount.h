@interface _ICNANoteReportToAccount : NSObject {
    float _noteTwoFactorMatrix[10][10];
    int _noteCollaborationMatrix[3][3];
}

@property (nonatomic) unsigned long long countOfNotesWithDocScan;
@property (nonatomic) unsigned long long countOfNotesWithInlineDrawingV1;
@property (nonatomic) unsigned long long countOfNotesWithInlineDrawingV2;
@property (nonatomic) unsigned long long countOfNotesWithFullscreenDrawing;
@property (nonatomic) unsigned long long countOfNotesWithTable;
@property (nonatomic) unsigned long long countOfNotesWithRichURL;
@property (nonatomic) unsigned long long countOfNotesWithMapLink;
@property (nonatomic) unsigned long long countOfNotesWithOtherAttachments;
@property (nonatomic) unsigned long long countOfNotesWithPaperKit;
@property (nonatomic) unsigned long long countOfNotesWithDeepLink;
@property (nonatomic) unsigned long long countOfNotesWithTags;
@property (nonatomic) unsigned long long countOfNotesWithMentions;
@property (nonatomic) unsigned long long scrapPaperCount;
@property (nonatomic) unsigned long long countOfScrapPapersWithTags;
@property (nonatomic) unsigned long long countOfScrapPapersWithMentions;
@property (nonatomic) unsigned long long countOfPinnedScrapPapers;
@property (nonatomic) unsigned long long countOfLockedScrapPapers;
@property (nonatomic) unsigned long long countOfCollaboratedScrapPapers;
@property (nonatomic) unsigned long long countOfScrapPapersWithDocScan;
@property (nonatomic) unsigned long long countOfScrapPapersWithInlineDrawingV1;
@property (nonatomic) unsigned long long countOfScrapPapersWithInlineDrawingV2;
@property (nonatomic) unsigned long long countOfScrapPapersWithFullscreenDrawing;
@property (nonatomic) unsigned long long countOfScrapPapersWithTables;
@property (nonatomic) unsigned long long countOfScrapPapersWithRichUrl;
@property (nonatomic) unsigned long long countOfScrapPapersWithMapLink;
@property (nonatomic) unsigned long long countOfScrapPapersWithOtherAttachments;
@property (nonatomic) unsigned long long countOfScrapPapersWithPaperKit;
@property (nonatomic) unsigned long long countOfScrapPapersWithDeepLink;
@property (nonatomic) unsigned long long countOfNotes;
@property (nonatomic) unsigned long long countOfChecklists;
@property (nonatomic) unsigned long long countOfNotesWithChecklists;
@property (nonatomic) unsigned long long countOfPinnedNotes;
@property (nonatomic) unsigned long long countOfLockedNotes;
@property (nonatomic) unsigned long long countOfV1LockedNotes;
@property (nonatomic) unsigned long long countOfV2LockedNotes;
@property (nonatomic) unsigned long long countOfLockedNotesWithDivergedMode;
@property (nonatomic) unsigned long long countOfLockedNotesWithDivergedPassword;

- (id)init;
- (void)completeTwoFactorMatrixReportingForCurrentNote;
- (unsigned long long)countOfNotesWithCollaborationStatus:(long long)a0 collaborationType:(long long)a1;
- (unsigned long long)countOfNotesWithFactor:(long long)a0 andFactor:(long long)a1;
- (void)updateNoteCollaborationMatrixWithCollaborationStatus:(id)a0 collaborationType:(id)a1;
- (void)updateNoteTwoFactorMatrixWithIndex:(long long)a0;

@end
