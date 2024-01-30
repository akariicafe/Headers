@class NSString;

@interface MapsSuggestionsTrafficAndETAResult : NSObject

@property (nonatomic) BOOL isSuccess;
@property (nonatomic) double seconds;
@property (copy, nonatomic) NSString *shortTrafficString;
@property (copy, nonatomic) NSString *longTrafficString;
@property (copy, nonatomic) NSString *writtenRouteName;
@property (copy, nonatomic) NSString *spokenRouteName;

- (void).cxx_destruct;
- (id)initWithGEOTrafficAndETAResult:(id)a0;

@end
