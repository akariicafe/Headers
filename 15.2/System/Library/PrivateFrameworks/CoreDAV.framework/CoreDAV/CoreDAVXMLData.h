@class CoreDAVXMLData_Impl, NSMutableDictionary, NSData, NSMutableArray;

@interface CoreDAVXMLData : NSObject {
    CoreDAVXMLData_Impl *_dataImpl;
    BOOL _docHasEnded;
    NSMutableDictionary *_seenURIsToPrefixes;
    NSMutableDictionary *_seenURIsToDepth;
    NSMutableArray *_elementStack;
}

@property (nonatomic) BOOL shouldAddFormattingSpaces;
@property (readonly, nonatomic) NSData *data;

+ (BOOL)string:(id)a0 isEqualToXmlCharString:(const char *)a1;

- (void)startElement:(id)a0 inNamespace:(id)a1 withAttributes:(id)a2;
- (void)appendElement:(id)a0 inNamespace:(id)a1 withStringContentAsCDATA:(id)a2 withAttributeNamesAndValues:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)endElement:(id)a0 inNamespace:(id)a1;
- (void)startElement:(id)a0 inNamespace:(id)a1 withAttributeNamesAndValues:(id)a2;
- (void)dealloc;
- (void)_startElement:(id)a0 inNamespace:(id)a1;
- (void)_startElement:(id)a0 inNamespace:(id)a1 withAttributeNamesAndValues:(id)a2 attributes:(char *)a3;
- (const char *)_prefixForNameSpace:(const char *)a0;
- (void)appendElement:(id)a0 inNamespace:(id)a1 withStringContent:(id)a2 withAttributeNamesAndValues:(id)a3;

@end
