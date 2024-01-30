@class NSURL;

@interface RPTSettings : NSObject

@property (class, readonly) RPTSettings *processEnvironment;

@property (retain, nonatomic) NSURL *recapOverrideFileURL;

- (id)initFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
