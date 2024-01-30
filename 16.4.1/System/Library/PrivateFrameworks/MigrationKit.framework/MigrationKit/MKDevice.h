@class NSString;

@interface MKDevice : NSObject

@property (nonatomic) long long iconSize;
@property (copy, nonatomic) NSString *systemName;
@property (copy, nonatomic) NSString *systemVersion;
@property (copy, nonatomic) NSString *deviceFamily;

- (id)init;
- (void).cxx_destruct;

@end
