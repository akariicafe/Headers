@class NSString;

@interface CPUIAssistantCellConfiguration : NSObject <CPUIAssistantCellConfigurationProtocol>

@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationWithText:(id)a0;

- (void).cxx_destruct;

@end
