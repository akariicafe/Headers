@class NSString;

@interface FMSystemVersionNumber : NSObject

@property (nonatomic) long long baseNumber;
@property (copy, nonatomic) NSString *baseLetter;
@property (nonatomic) long long buildNumber;
@property (copy, nonatomic) NSString *suffix;

- (id)initWithString:(id)a0;
- (id)debugDescription;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
