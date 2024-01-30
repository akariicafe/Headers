@class NSSet, NSDictionary, NSMutableSet, WFScanRequest, NSString;

@interface WFScanOperation : WFOperation

@property (retain, nonatomic) NSMutableSet *scanResults;
@property (retain, nonatomic) WFScanRequest *request;
@property (retain, nonatomic) NSDictionary *scanParameters;
@property (readonly, nonatomic) NSSet *results;
@property (copy, nonatomic) NSString *targetSSID;

- (void)cancel;
- (void)finish;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)start;
- (void)scanDidFinishWithResults:(id)a0 error:(int)a1;

@end
