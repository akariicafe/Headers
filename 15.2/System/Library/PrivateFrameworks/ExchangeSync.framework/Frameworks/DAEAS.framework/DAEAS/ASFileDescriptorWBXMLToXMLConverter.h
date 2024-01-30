@interface ASFileDescriptorWBXMLToXMLConverter : ASWBXMLToXMLConverter

@property (nonatomic) int input;
@property (nonatomic) int output;

- (BOOL)runSynchronously;
- (void)outputString:(id)a0;
- (void)outputData:(id)a0;
- (long long)readFromInput;
- (id)initWithInputFD:(int)a0 outputFD:(int)a1 usingMetadata:(BOOL)a2;

@end
