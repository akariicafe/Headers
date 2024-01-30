@class NSData, NSString, NSArray;

@interface IMXMLParserContext : NSObject

@property (readonly, retain) NSData *inContentAsData;
@property (readonly, retain) NSString *name;
@property (readonly, retain) NSArray *resultsForLogging;

- (void)dealloc;
- (void)reset;
- (id)initWithContent:(id)a0;
- (id)inContent;
- (id)initWithContentAsData:(id)a0;

@end
