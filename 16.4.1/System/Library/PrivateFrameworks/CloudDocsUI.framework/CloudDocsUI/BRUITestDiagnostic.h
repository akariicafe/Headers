@class NSString, NSMutableDictionary;

@interface BRUITestDiagnostic : NSObject {
    NSString *_outputDirectoryPath;
    NSMutableDictionary *_diagnosticDataBySectionName;
}

- (void).cxx_destruct;
- (BOOL)writeToDiskWithError:(id *)a0;
- (void)addDiagnosticData:(id)a0 forFilename:(id)a1;
- (void)addDiagnosticData:(id)a0 forFilename:(id)a1 sectionName:(id)a2;
- (id)initWithOutputDirectoryPath:(id)a0;

@end
