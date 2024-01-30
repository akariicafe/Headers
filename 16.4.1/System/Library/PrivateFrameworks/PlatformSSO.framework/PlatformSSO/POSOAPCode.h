@class NSString, POSOAPSubcode;

@interface POSOAPCode : NSObject <POXSDefinitionProvider>

@property (copy, nonatomic) NSString *Value;
@property (retain, nonatomic) POSOAPSubcode *Subcode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
