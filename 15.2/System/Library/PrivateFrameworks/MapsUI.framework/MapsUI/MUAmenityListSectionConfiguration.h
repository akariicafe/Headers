@class NSArray, MUAmenityApplePayConfiguration;

@interface MUAmenityListSectionConfiguration : NSObject

@property (copy, nonatomic) NSArray *viewModels;
@property (retain, nonatomic) MUAmenityApplePayConfiguration *applePayConfiguration;
@property (nonatomic) unsigned long long numberInlineAmenities;

- (void).cxx_destruct;

@end
