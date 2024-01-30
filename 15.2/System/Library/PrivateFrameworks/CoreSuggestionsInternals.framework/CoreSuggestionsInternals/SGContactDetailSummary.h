@class NSArray, NSString;

@interface SGContactDetailSummary : NSObject

@property (copy, nonatomic) NSArray *phones;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSArray *socialProfileIdentifiers;

- (void).cxx_destruct;

@end
