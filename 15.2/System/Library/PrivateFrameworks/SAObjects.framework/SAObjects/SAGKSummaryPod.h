@class NSString, SAUIImageResource;

@interface SAGKSummaryPod : SAGKPodView

@property (copy, nonatomic) NSString *caption;
@property (retain, nonatomic) SAUIImageResource *imageResource;
@property (copy, nonatomic) NSString *text;

+ (id)summaryPod;
+ (id)summaryPodWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
