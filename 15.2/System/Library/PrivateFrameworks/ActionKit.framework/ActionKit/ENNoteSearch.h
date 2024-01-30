@class NSString;

@interface ENNoteSearch : NSObject

@property (retain, nonatomic) NSString *searchString;

+ (id)noteSearchWithSearchString:(id)a0;
+ (id)noteSearchCreatedByThisApplication;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSearchString:(id)a0;

@end
