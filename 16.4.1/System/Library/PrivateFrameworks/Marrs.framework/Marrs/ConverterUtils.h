@interface ConverterUtils : NSObject

+ (struct Reader { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; })getCppReaderFromObjCObject:(id)a0;
+ (struct unique_ptr<sirinluinternalmention_detector::MentionDetectorRequest, std::default_delete<sirinluinternalmention_detector::MentionDetectorRequest>> { struct __compressed_pair<sirinluinternalmention_detector::MentionDetectorRequest *, std::default_delete<sirinluinternalmention_detector::MentionDetectorRequest>> { struct MentionDetectorRequest *x0; } x0; })convertMentionDetectorRequestFromObjCToCpp:(id)a0;
+ (id)convertMentionDetectorResponseFromCppToObjC:(void *)a0;
+ (struct unique_ptr<sirinluinternalmention_resolver::MentionResolverRequest, std::default_delete<sirinluinternalmention_resolver::MentionResolverRequest>> { struct __compressed_pair<sirinluinternalmention_resolver::MentionResolverRequest *, std::default_delete<sirinluinternalmention_resolver::MentionResolverRequest>> { struct MentionResolverRequest *x0; } x0; })convertMentionResolverRequestFromObjCToCpp:(id)a0;
+ (id)convertMentionResolverResponseFromCppToObjC:(void *)a0;

@end
