@class NSString, NSArray;

@interface CBSDeviceInformationField : NSObject

@property (nonatomic) unsigned long long format;
@property (retain, nonatomic) NSString *value;
@property (readonly, nonatomic) NSString *formattedTitle;
@property (readonly, nonatomic) NSString *formattedValue;
@property (readonly, nonatomic) NSArray *formattedValuesArray;
@property (readonly, nonatomic) BOOL multiLineFormatted;

+ (id)fieldWithFormat:(unsigned long long)a0 value:(id)a1;

- (id)title;
- (void).cxx_destruct;
- (id)_formattedIMEI:(id)a0;
- (id)initWithFormat:(unsigned long long)a0 value:(id)a1;

@end
