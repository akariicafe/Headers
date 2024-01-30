@class NSDictionary;

@interface _SFSearchRequest : NSObject

@property (nonatomic) long long searchTypes;
@property (copy, nonatomic) NSDictionary *headerFields;
@property (copy, nonatomic) NSDictionary *queryParameters;

- (void).cxx_destruct;

@end
