@class NSMutableDictionary;

@interface GEOClientRequestInfo : NSObject

@property (readonly, nonatomic) NSMutableDictionary *requests;

- (void)incrementCountForRequestType:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)countForRequestType:(int)a0;

@end
