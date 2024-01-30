@class NSString, CompletionList, NSDate;

@interface SearchStateItem : NSObject

@property (retain, nonatomic) NSDate *cacheDate;
@property (retain, nonatomic) CompletionList *completionList;
@property (copy, nonatomic) NSString *destinationTLD;
@property (nonatomic) BOOL didOriginateFromSearchSuggestion;
@property (nonatomic) long long parsecQueryID;

- (void).cxx_destruct;

@end
