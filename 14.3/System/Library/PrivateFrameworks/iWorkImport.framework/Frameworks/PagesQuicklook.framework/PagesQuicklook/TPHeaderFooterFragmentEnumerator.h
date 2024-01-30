@class TPPageMaster;

@interface TPHeaderFooterFragmentEnumerator : NSEnumerator

@property (retain, nonatomic) TPPageMaster *pageMaster;
@property (nonatomic) long long fragmentIndex;
@property (nonatomic) long long headerFooterType;

- (void).cxx_destruct;
- (id)nextObject;
- (void)p_incrementFragmentIndex;
- (void)p_incrementHeaderFooterType;
- (id)initWithPageMaster:(id)a0;

@end
