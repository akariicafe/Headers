@class NSString, NSData;

@interface HAPPGExporter : NSObject <SRSampleExporting, SRSampling> {
    double _srTimestamp;
    NSData *_mimosaData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)sr_exportRepresentationEnumerator;

@end
