@class NSString, NSArray;

@interface DEValidationResult : NSObject

@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSArray *errors;
@property (retain, nonatomic) NSArray *warnings;

- (void).cxx_destruct;

@end
