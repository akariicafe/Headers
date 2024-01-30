@class NSNumber, NSString;

@interface MTROptionalQRCodeInfo : NSObject

@property (copy, nonatomic) NSNumber *infoType;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSNumber *tag;
@property (copy, nonatomic) NSNumber *integerValue;
@property (copy, nonatomic) NSString *stringValue;

- (void).cxx_destruct;

@end
