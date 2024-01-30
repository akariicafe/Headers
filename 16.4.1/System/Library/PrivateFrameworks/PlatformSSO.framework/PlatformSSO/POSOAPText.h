@class NSString;

@interface POSOAPText : NSObject <POXSDefinitionProvider>

@property (copy, nonatomic) NSString *stringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
