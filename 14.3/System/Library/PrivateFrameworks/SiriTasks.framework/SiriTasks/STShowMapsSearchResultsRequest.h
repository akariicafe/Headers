@class STSiriLocation, NSString, NSDate;

@interface STShowMapsSearchResultsRequest : AFSiriRequest {
    STSiriLocation *_searchResults;
    NSString *_extSessionGuid;
    NSDate *_extSessionGuidCreatedTimestamp;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (void)encodeWithCoder:(id)a0;
- (id)searchResults;
- (id)_initWithLocation:(id)a0 extSessionGuid:(id)a1 extSessionGuidCreatedTimestamp:(id)a2;

@end
