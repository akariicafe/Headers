@class NSString;
@protocol HDExperiment, HDAnalysis;

@interface HDSimpleDiagnostic : NSObject <HDDiagnostic>

@property (copy, nonatomic) NSString *summary;
@property (retain, nonatomic) id<HDExperiment> experiment;
@property (retain, nonatomic) id<HDAnalysis> analysis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
