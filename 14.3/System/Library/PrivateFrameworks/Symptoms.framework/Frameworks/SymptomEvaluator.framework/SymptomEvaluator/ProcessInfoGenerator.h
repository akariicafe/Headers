@class NSString;

@interface ProcessInfoGenerator : NSObject <ConfigurableObjectProtocol, AdditionalInfoProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;
+ (id)generateAdditionalInfo:(id)a0;

- (int)configureInstance:(id)a0;
- (id)generateAdditionalInfo:(id)a0;

@end
