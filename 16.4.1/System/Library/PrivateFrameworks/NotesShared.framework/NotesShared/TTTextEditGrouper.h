@class ICNote, NSMutableDictionary, TTTextEditFilter;

@interface TTTextEditGrouper : NSObject

@property (readonly, nonatomic) NSMutableDictionary *userIDForReplicaID;
@property (readonly, nonatomic) NSMutableDictionary *trustsTimestampsFromReplicaID;
@property (readonly, nonatomic) NSMutableDictionary *checkmarkReplicaIDForUserID;
@property (readonly, nonatomic) ICNote *note;
@property (copy, nonatomic) TTTextEditFilter *filter;
@property (nonatomic) BOOL includesTableEdits;
@property (nonatomic) BOOL includesCheckmarkEdits;
@property (nonatomic) BOOL joinsTextGaps;
@property (nonatomic) BOOL joinsWhitespaceAndNewlineGaps;

- (void).cxx_destruct;
- (id)groupedEditsForEdits:(id)a0 inAttributedString:(id)a1;
- (id)initWithNote:(id)a0;
- (id)editGroupForEdits:(id)a0 userID:(id)a1 inAttributedString:(id)a2;
- (id)editsByAddingAllowedAttachmentEditsToEdit:(id)a0 inAttributedString:(id)a1;
- (id)editsByAddingCheckmarkEditsToEdit:(id)a0 inAttributedString:(id)a1;
- (id)editsByAddingTableEditsToEdit:(id)a0 inAttributedString:(id)a1;
- (id)filteredEditForEdit:(id)a0 inAttributedString:(id)a1;
- (id)groupedEdits;
- (id)latestTimestampForEdits:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForEdits:(id)a0;
- (BOOL)trustsTimestampsFromReplicaID:(id)a0;
- (id)userIDForReplicaID:(id)a0;

@end
