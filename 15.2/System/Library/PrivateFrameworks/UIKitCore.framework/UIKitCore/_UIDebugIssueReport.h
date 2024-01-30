@class NSArray, NSString, NSMutableArray;

@interface _UIDebugIssueReport : NSObject <_UIDebugIssueReporting> {
    NSMutableArray *_mutableIssues;
}

@property (readonly, copy, nonatomic) NSArray *issues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addIssue:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
