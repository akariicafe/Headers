@class NSArray, NSString, NSDictionary;

@interface TITypingSessionParams : NSObject

@property (readonly, nonatomic) NSArray *activeInputModes;
@property (readonly, nonatomic) NSString *wordSeparator;
@property (readonly, nonatomic) NSDictionary *testingParameters;
@property (readonly, nonatomic) long long assetAvailabilityStatus;

- (id)initWithActiveInputModes:(id)a0 wordSeparator:(id)a1 testingParameters:(id)a2 assetAvailabilityStatus:(long long)a3;
- (void).cxx_destruct;

@end
