@class NSArray, NSString;

@interface WFDiagnosticsResultItemAWDL : NSObject <WFDiagnosticsResultItem>

@property (retain, nonatomic) NSArray *results;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *suggestion;
@property (nonatomic) BOOL didPassTest;
@property (retain, nonatomic) NSArray *failedTests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResults:(id)a0;
- (void).cxx_destruct;

@end
