@class NSString, NSNumber;

@interface EDAMNotebookDescriptor : FATObject

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *notebookDisplayName;
@property (retain, nonatomic) NSString *contactName;
@property (retain, nonatomic) NSNumber *hasSharedNotebook;
@property (retain, nonatomic) NSNumber *joinedUserCount;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
