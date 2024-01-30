@class NSString;

@interface SGNLPDetection : NSObject

@property (retain, nonatomic) NSString *string;
@property (nonatomic) unsigned long long category;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (void).cxx_destruct;

@end
