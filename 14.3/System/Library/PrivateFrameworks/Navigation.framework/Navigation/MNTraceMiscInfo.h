@class NSString;

@interface MNTraceMiscInfo : NSObject

@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long intValue;
@property (nonatomic) double doubleValue;
@property (copy, nonatomic) NSString *stringValue;

- (void).cxx_destruct;

@end
