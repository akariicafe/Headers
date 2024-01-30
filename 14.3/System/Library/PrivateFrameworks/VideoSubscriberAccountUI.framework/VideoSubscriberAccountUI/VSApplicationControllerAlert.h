@class NSString, NSArray;

@interface VSApplicationControllerAlert : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) NSArray *actions;

- (void).cxx_destruct;

@end
