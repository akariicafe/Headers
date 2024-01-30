@class NSString, NSError;

@interface PKUniqueAddressField : NSObject

@property (retain, nonatomic) NSString *key;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *invalidText;
@property (nonatomic) BOOL formatIsInvalid;

- (void).cxx_destruct;

@end
