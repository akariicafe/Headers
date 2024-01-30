@class NSNumber, NSString;

@interface AKTrustedPhoneNumber : NSObject

@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSString *number;
@property (retain, nonatomic) NSString *numberWithDialCode;
@property (retain, nonatomic) NSString *obfuscatedNumber;
@property (retain, nonatomic) NSString *pushMode;

- (id)description;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)a0;

@end
