@class ENNotebook, NSString, ENNoteRef, NSDate;

@interface ENSessionFindNotesResult : NSObject

@property (nonatomic) int updateSequenceNum;
@property (retain, nonatomic) ENNoteRef *noteRef;
@property (retain, nonatomic) ENNotebook *notebook;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *created;
@property (retain, nonatomic) NSDate *updated;
@property (nonatomic) BOOL hasResources;

- (void).cxx_destruct;
- (id)description;

@end
