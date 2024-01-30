@class NSString, NSDictionary;

@interface IEDialogResponse : IEResponse

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *catId;
@property (retain, nonatomic) NSDictionary *catParameters;

- (void).cxx_destruct;

@end
