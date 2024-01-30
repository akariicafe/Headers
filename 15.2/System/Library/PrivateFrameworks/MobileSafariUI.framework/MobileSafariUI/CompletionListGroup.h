@class NSString, NSArray;

@interface CompletionListGroup : SFResultSection

@property (readonly, copy, nonatomic) NSString *headerViewReuseIdentifier;
@property (readonly, copy, nonatomic) NSArray *completions;
@property (readonly, nonatomic) NSString *defaultHeaderTitle;

- (void)configureHeaderView:(id)a0 forCompletionList:(id)a1;
- (void)setCompletions:(id)a0;
- (id)initWithTitle:(id)a0 completions:(id)a1 maximumNumberOfCompletions:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)headerView;

@end
