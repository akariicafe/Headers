@class NSString, POSOAPEnvelope;

@interface POSOAPDocument : SOAPBaseDocument <POXSDefinitionProvider>

@property (retain, nonatomic) POSOAPEnvelope *Envelope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;
- (id)XMLStringWithOptions:(unsigned long long)a0;
- (void)_XMLAttributeStringWithPrefix:(id)a0 name:(id)a1 value:(id)a2 options:(unsigned long long)a3 appendingToString:(id)a4;
- (void)_XMLAttributesStringWithComplexType:(id)a0 options:(unsigned long long)a1 appendingToString:(id)a2;
- (void)_XMLQualifiedNameForNamespace:(id)a0 elementName:(id)a1 options:(unsigned long long)a2 appendingToString:(id)a3;
- (void)_XMLStringWithComplexType:(id)a0 options:(unsigned long long)a1 appendingToString:(id)a2;
- (void)_XMLStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
