@class NSString;

@interface ENNoteSearch : NSObject

@property (retain, nonatomic) NSString *searchString;

+ (id)noteSearchWithSearchString:(id)a0;
+ (id)noteSearchCreatedByThisApplication;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSearchString:(id)a0;

@end
