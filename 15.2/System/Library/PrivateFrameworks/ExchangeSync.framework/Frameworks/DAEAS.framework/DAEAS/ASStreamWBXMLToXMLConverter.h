@class NSString, NSOutputStream, NSInputStream;

@interface ASStreamWBXMLToXMLConverter : ASWBXMLToXMLConverter <NSStreamDelegate> {
    NSInputStream *_input;
    NSOutputStream *_output;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)runSynchronously;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)outputString:(id)a0;
- (void)outputData:(id)a0;
- (long long)readFromInput;
- (id)initWithWBXMLInput:(id)a0 forOutput:(id)a1 usingMetadata:(BOOL)a2;

@end
