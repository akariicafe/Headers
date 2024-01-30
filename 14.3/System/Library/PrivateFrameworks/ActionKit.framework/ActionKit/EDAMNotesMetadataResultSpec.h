@class NSNumber;

@interface EDAMNotesMetadataResultSpec : FATObject

@property (retain, nonatomic) NSNumber *includeTitle;
@property (retain, nonatomic) NSNumber *includeContentLength;
@property (retain, nonatomic) NSNumber *includeCreated;
@property (retain, nonatomic) NSNumber *includeUpdated;
@property (retain, nonatomic) NSNumber *includeDeleted;
@property (retain, nonatomic) NSNumber *includeUpdateSequenceNum;
@property (retain, nonatomic) NSNumber *includeNotebookGuid;
@property (retain, nonatomic) NSNumber *includeTagGuids;
@property (retain, nonatomic) NSNumber *includeAttributes;
@property (retain, nonatomic) NSNumber *includeLargestResourceMime;
@property (retain, nonatomic) NSNumber *includeLargestResourceSize;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
