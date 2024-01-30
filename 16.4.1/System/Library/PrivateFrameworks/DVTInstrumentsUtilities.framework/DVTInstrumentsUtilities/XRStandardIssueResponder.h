@class NSString;

@interface XRStandardIssueResponder : NSObject <XRIssueResponder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)defaultResponder;
+ (void)setDefaultResponder:(id)a0;

- (void)handleIssue:(id)a0 type:(short)a1 from:(id)a2;

@end
