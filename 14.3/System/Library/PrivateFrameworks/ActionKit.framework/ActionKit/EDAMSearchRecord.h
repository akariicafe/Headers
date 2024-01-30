@class NSString, EDAMNoteFilter, NSNumber;

@interface EDAMSearchRecord : FATObject

@property (retain, nonatomic) NSString *userQuery;
@property (retain, nonatomic) EDAMNoteFilter *noteFilter;
@property (retain, nonatomic) NSNumber *searchScope;
@property (retain, nonatomic) NSNumber *searchTime;
@property (retain, nonatomic) NSString *selectedNoteGUID;
@property (retain, nonatomic) NSNumber *selectTime;
@property (retain, nonatomic) NSNumber *noteRank;
@property (retain, nonatomic) NSNumber *noteCount;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
