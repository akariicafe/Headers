@class NSString, NSMutableArray;

@interface WPDPendingCompletions : NSObject

@property (retain) NSMutableArray *pendingCompletions;
@property unsigned long long lastID;
@property (retain) NSString *name;

- (id)initWithName:(id)a0;
- (unsigned long long)addCompletion:(id)a0;
- (void)completeID:(unsigned long long)a0 success:(BOOL)a1;
- (id)description;
- (void).cxx_destruct;

@end
