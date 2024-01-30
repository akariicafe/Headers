@class NSString, NSArray;

@interface CompletionGroup : SFResultSection

@property (readonly, copy, nonatomic) NSString *headerViewReuseIdentifier;
@property (readonly, copy, nonatomic) NSArray *completions;
@property (readonly, nonatomic) NSString *defaultHeaderTitle;

- (id)headerView;
- (void).cxx_destruct;
- (void)setCompletions:(id)a0;
- (void)configureHeaderView:(id)a0 forCompletionList:(id)a1;
- (id)initWithTitle:(id)a0 completions:(id)a1 maximumNumberOfCompletions:(unsigned long long)a2;

@end
