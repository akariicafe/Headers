@class NSString;

@interface PSRegion : NSObject

@property (retain, nonatomic) NSString *regionName;
@property (retain, nonatomic) NSString *regionCode;

+ (id)regionWithName:(id)a0 code:(id)a1;

- (void).cxx_destruct;

@end
