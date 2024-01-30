@class NSURL;

@interface RPTSettings : NSObject

@property (class, readonly) RPTSettings *processEnvironment;

@property (retain, nonatomic) NSURL *recapOverrideFileURL;
@property (nonatomic) long long activationIterationCount;

- (id)initFromDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
