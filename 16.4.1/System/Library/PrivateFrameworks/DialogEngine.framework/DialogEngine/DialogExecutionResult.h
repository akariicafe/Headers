@class NSString, NSDictionary, NSArray;

@interface DialogExecutionResult : NSObject

@property (retain, nonatomic) NSString *catId;
@property (retain, nonatomic) NSDictionary *meta;
@property (retain, nonatomic) NSArray *dialog;

- (void).cxx_destruct;

@end
