@class NSString;

@interface _CNACDPeopleSuggesterFacade : NSObject <CNACDPeopleSuggesterFacade>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)suggestPeopleWithContext:(id)a0 settings:(id)a1 error:(id *)a2;

@end
