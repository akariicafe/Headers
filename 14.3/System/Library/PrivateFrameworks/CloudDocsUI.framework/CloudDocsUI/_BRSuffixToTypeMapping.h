@class NSString;

@interface _BRSuffixToTypeMapping : NSObject

@property (copy, nonatomic) NSString *suffix;
@property (copy, nonatomic) NSString *type;

- (void).cxx_destruct;
- (BOOL)appliesToType:(id)a0;

@end
