@class NSString, NSArray, EDAMNoteAttributes, NSNumber;

@interface EDAMNoteMetadata : FATObject

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *contentLength;
@property (retain, nonatomic) NSNumber *created;
@property (retain, nonatomic) NSNumber *updated;
@property (retain, nonatomic) NSNumber *deleted;
@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSString *notebookGuid;
@property (retain, nonatomic) NSArray *tagGuids;
@property (retain, nonatomic) EDAMNoteAttributes *attributes;
@property (retain, nonatomic) NSString *largestResourceMime;
@property (retain, nonatomic) NSNumber *largestResourceSize;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
