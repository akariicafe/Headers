@interface CDMNLServiceUtils : NSObject

+ (id)buildSetupNLv4ProtoRequest;
+ (void)populateParser:(id)a0 parserToSet:(id)a1;
+ (id)buildSNLCProtoResponse:(id)a0 snlcRequest:(id)a1 parserToSet:(id)a2;
+ (id)buildSetupSNLCProtoRequest;
+ (struct unique_ptr<sirinluinternalnlv4_parser::NLv4ParserRequest, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> { struct __compressed_pair<sirinluinternalnlv4_parser::NLv4ParserRequest *, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> { struct NLv4ParserRequest *x0; } x0; })buildNLv4ProtoRequest:(id)a0;

@end
