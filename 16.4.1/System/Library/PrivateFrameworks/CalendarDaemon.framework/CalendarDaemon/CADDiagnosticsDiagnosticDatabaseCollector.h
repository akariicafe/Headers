@class NSString, NSURL;

@interface CADDiagnosticsDiagnosticDatabaseCollector : NSObject <CADDiagnosticLogCollector> {
    NSURL *_outputURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
