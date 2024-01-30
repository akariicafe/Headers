@class NSNumber, NSString, NSArray;

@interface EDAMNoteFilter : FATObject

@property (retain, nonatomic) NSNumber *order;
@property (retain, nonatomic) NSNumber *ascending;
@property (retain, nonatomic) NSString *words;
@property (retain, nonatomic) NSString *notebookGuid;
@property (retain, nonatomic) NSArray *tagGuids;
@property (retain, nonatomic) NSString *timeZone;
@property (retain, nonatomic) NSNumber *inactive;
@property (retain, nonatomic) NSString *emphasized;
@property (retain, nonatomic) NSNumber *includeAllReadableNotebooks;
@property (retain, nonatomic) NSString *context;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
