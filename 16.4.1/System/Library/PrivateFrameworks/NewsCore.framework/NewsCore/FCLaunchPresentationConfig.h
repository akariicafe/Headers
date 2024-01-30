@class NSArray;

@interface FCLaunchPresentationConfig : NSObject

@property (nonatomic) long long configVersion;
@property (retain, nonatomic) NSArray *presentationOperations;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;

@end
