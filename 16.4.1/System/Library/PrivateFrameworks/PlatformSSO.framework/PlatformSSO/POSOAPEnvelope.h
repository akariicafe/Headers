@class NSArray, NSString;

@interface POSOAPEnvelope : NSObject <POXSDefinitionProvider>

@property (copy, nonatomic) NSArray *Header;
@property (copy, nonatomic) NSArray *Body;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
