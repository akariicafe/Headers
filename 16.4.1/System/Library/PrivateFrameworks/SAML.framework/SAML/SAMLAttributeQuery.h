@class SAMLAttributeQueryElement, NSString, NSData;

@interface SAMLAttributeQuery : XMLWrapperDoc {
    NSData *_schemaData;
}

@property (retain, nonatomic) SAMLAttributeQueryElement *requestElement;
@property (readonly, nonatomic) NSString *channelId;

- (void)addAttribute:(id)a0;
- (void).cxx_destruct;
- (void)addAttribute:(id)a0 values:(id)a1;
- (id)initWithData:(id)a0 schema:(id)a1 error:(id *)a2;
- (id)initWithElement:(id)a0 schema:(id)a1 error:(id *)a2;
- (void)setSubjectFromResponse:(id)a0;

@end
