@class NSMutableArray;

@interface TITokenizationRevision : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } originalSelectedTokenRange;
@property (nonatomic) struct _TIRevisionHistoryTokenIterator { unsigned long long tokenIndex; unsigned long long documentLocation; } originalIterator;
@property (nonatomic) unsigned long long revisedDocumentLocation;
@property (nonatomic) unsigned long long branchedTokenIndex;
@property (nonatomic) unsigned long long mergedTokenIndex;
@property (readonly, nonatomic) NSMutableArray *branchTokens;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTokenIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0;

@end
