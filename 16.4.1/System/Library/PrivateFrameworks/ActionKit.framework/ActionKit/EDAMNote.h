@class EDAMNoteLimits, NSString, NSArray, NSData, EDAMNoteAttributes, NSNumber, EDAMNoteRestrictions;

@interface EDAMNote : FATObject

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSData *contentHash;
@property (retain, nonatomic) NSNumber *contentLength;
@property (retain, nonatomic) NSNumber *created;
@property (retain, nonatomic) NSNumber *updated;
@property (retain, nonatomic) NSNumber *deleted;
@property (retain, nonatomic) NSNumber *active;
@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSString *notebookGuid;
@property (retain, nonatomic) NSArray *tagGuids;
@property (retain, nonatomic) NSArray *resources;
@property (retain, nonatomic) EDAMNoteAttributes *attributes;
@property (retain, nonatomic) NSArray *tagNames;
@property (retain, nonatomic) NSArray *sharedNotes;
@property (retain, nonatomic) EDAMNoteRestrictions *restrictions;
@property (retain, nonatomic) EDAMNoteLimits *limits;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
