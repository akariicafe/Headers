@class NSString, NSArray;

@interface OBPrivacyFlowGroup : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *privacyFlows;

+ (id)groupFlowsByCombinedHeader:(id)a0 language:(id)a1 preferredDeviceTye:(unsigned long long)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 privacyFlows:(id)a1;

@end
