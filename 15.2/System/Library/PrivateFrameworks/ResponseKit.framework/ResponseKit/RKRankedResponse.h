@class NSString;

@interface RKRankedResponse : NSObject

@property (retain) NSString *response;
@property unsigned long long inputMethod;
@property double score;

- (void).cxx_destruct;
- (id)initWithResponse:(id)a0 inputMethod:(unsigned long long)a1 score:(double)a2;

@end
