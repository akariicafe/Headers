@class NSArray, NSString;

@interface SLRegexMatcher : NSObject <SLODLDPreProcessingComponent>

@property (retain, nonatomic) NSArray *regexMatchingRules;
@property (retain, nonatomic) NSArray *replaceStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
