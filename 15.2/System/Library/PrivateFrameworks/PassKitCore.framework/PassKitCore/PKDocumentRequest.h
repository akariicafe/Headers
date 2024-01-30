@class NSString, DIAttributeDocument;

@interface PKDocumentRequest : NSObject

@property (nonatomic) unsigned long long documentType;
@property (copy, nonatomic) NSString *countryCode;
@property (retain, nonatomic) DIAttributeDocument *documentAttribute;

- (void).cxx_destruct;

@end
