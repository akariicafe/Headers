@class NSDictionary, NSMutableArray, NSString;

@interface PCCGroupJob : PCCJob {
    NSMutableArray *_log_sets;
    NSDictionary *_content;
    NSString *_group_type;
    unsigned int _total_count;
    unsigned int _rejected_count;
    unsigned int _success_count;
    unsigned int _error_count;
    unsigned int _consecutive_error_count;
}

- (id)result;
- (void).cxx_destruct;
- (id)description;
- (id)type;
- (id)initWithID:(id)a0 forTarget:(id)a1 options:(id)a2;
- (void)registerResult:(BOOL)a0 error:(id)a1;
- (void)prepareNext;

@end
