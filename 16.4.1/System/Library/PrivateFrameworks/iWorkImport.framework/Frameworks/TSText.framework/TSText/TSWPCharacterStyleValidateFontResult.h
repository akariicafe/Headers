@class NSString, TSUWarning;

@interface TSWPCharacterStyleValidateFontResult : NSObject

@property (retain, nonatomic) NSString *mappedName;
@property (retain, nonatomic) TSUWarning *warning;
@property (nonatomic) int bold;
@property (nonatomic) int italic;

- (void).cxx_destruct;

@end
