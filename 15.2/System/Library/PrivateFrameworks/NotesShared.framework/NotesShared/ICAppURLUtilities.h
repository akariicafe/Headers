@interface ICAppURLUtilities : NSObject

+ (id)appURLForNote:(id)a0;
+ (id)predicateForNoteMentionedInURL:(id)a0;
+ (BOOL)isShowHTMLFolderURL:(id)a0;
+ (BOOL)isShowFolderURL:(id)a0;
+ (id)objectIDURIRepresentationForHTMLFolderMentionedInURL:(id)a0;
+ (BOOL)isShowFolderListURL:(id)a0;
+ (id)attachmentIdentifierFromQuickNoteURL:(id)a0;
+ (id)predicateForNoteMentionedInURL:(id)a0 action:(id)a1;
+ (BOOL)isLaunchingQuickNoteViaPencil:(id)a0;
+ (id)appURLForHTMLFolder:(id)a0;
+ (id)urlForQuickNoteWithOptions:(id)a0;
+ (id)appURLforShowSmartFoldersHelp;
+ (id)appURLForFolder:(id)a0;
+ (BOOL)quickNoteURLIsContinuing:(id)a0;
+ (id)contentOffsetFromQuickNoteURL:(id)a0;
+ (id)objectIDURIRepresentationForHTMLNoteMentionedInURL:(id)a0;
+ (BOOL)isShowNoteURL:(id)a0;
+ (BOOL)quickNoteURLShouldShowShareSheet:(id)a0;
+ (id)appURLForFolderList;
+ (BOOL)isNewNoteURL:(id)a0;
+ (BOOL)isSystemPaperURL:(id)a0;
+ (BOOL)quickNoteURLShouldShowiCloudShareSheet:(id)a0;
+ (id)appURLForContainingFolderWithNoteFocused:(id)a0;
+ (BOOL)isShowSmartFoldersHelpURL:(id)a0;
+ (id)predicateForFolderWithNoteFocusedInURL:(id)a0;
+ (BOOL)isShowNoteFocusedInFolderURL:(id)a0;
+ (BOOL)isShowPaperURL:(id)a0;
+ (BOOL)isQuickNoteModeURL:(id)a0;
+ (id)objectIDURIRepresentationForFolderMentionedInURL:(id)a0;
+ (id)appURLForHTMLNote:(id)a0;
+ (BOOL)isShowLegacyNoteURL:(id)a0;
+ (BOOL)isShowHTMLNoteURL:(id)a0;
+ (id)referralURLForSnapshotBackgroundTask;
+ (BOOL)quickNoteURLShouldShowList:(id)a0;
+ (id)noteIdentifierFromQuickNoteURL:(id)a0;
+ (id)firstQueryItemInURL:(id)a0 withURLScheme:(id)a1 andHost:(id)a2 andQueryItemName:(id)a3;

@end
