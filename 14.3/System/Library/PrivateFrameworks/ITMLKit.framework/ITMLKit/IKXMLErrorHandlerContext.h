@class NSString, NSMutableString, NSMutableSet, NSArray;

@interface IKXMLErrorHandlerContext : NSObject

@property (retain, nonatomic) NSMutableString *mutableErrorMessages;
@property (retain, nonatomic) NSMutableSet *mutableParserErrors;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) NSArray *parserErrors;

- (void)clear;
- (id)init;
- (void).cxx_destruct;

@end
