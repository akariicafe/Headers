@class NSString, NSNumber;

@interface DEValidationEntry : NSObject

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *textWithLineNumber;
@property (retain, nonatomic) NSNumber *lineNumber;
@property (retain, nonatomic) NSString *filename;

- (void).cxx_destruct;

@end
