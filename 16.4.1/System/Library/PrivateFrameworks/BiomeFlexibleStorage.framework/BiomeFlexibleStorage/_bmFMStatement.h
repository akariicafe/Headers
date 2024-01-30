@class NSString;

@interface _bmFMStatement : NSObject

@property long long useCount;
@property (retain) NSString *query;
@property void *statement;
@property BOOL inUse;

- (void)dealloc;
- (void)close;
- (id)description;
- (void).cxx_destruct;
- (void)reset;

@end
