@class NSDictionary;

@interface APOdmlServerResponse : NSObject

@property (nonatomic) BOOL odmlEnabled;
@property (readonly, nonatomic) NSDictionary *featureValues;

- (void).cxx_destruct;
- (id)initWithSLPResponse:(id)a0;
- (id)initWithSRPResponse:(id)a0;

@end
