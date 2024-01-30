@class NSURL;

@interface PARAsyncMoreResults : SFMoreResults

@property (nonatomic) double scale;
@property (readonly, copy, nonatomic) NSURL *moreResultsURL;
@property (readonly, nonatomic) unsigned long long queryId;
@property (readonly, nonatomic) unsigned long long clientQueryId;

+ (BOOL)supportsSecureCoding;
+ (id)moreResults:(id)a0 label:(id)a1 session:(id)a2 scale:(double)a3 queryId:(unsigned long long)a4;
+ (id)moreResults:(id)a0 label:(id)a1 session:(id)a2 scale:(double)a3 queryId:(unsigned long long)a4 clientQueryId:(unsigned long long)a5;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
