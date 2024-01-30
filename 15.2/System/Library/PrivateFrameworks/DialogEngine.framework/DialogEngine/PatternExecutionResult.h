@class NSString, NSDictionary, NSArray, NSData;

@interface PatternExecutionResult : NSObject

@property (retain, nonatomic) NSString *patternId;
@property (retain, nonatomic) NSDictionary *meta;
@property (retain, nonatomic) NSArray *dialog;
@property (retain, nonatomic) NSData *visual;

- (void).cxx_destruct;

@end
