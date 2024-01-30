@class PGGraphNamingProcessor, NSString;

@interface PGNamingMentionedAddressAnalyzer : NSObject <PGNamingAnalyzer>

@property (readonly, weak, nonatomic) PGGraphNamingProcessor *processor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
