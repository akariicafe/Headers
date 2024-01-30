@class NSString, SGPostalAddressComponents;

@interface SGPostalAddressExtraction : NSObject

@property (readonly, nonatomic) NSString *plainText;
@property (readonly, nonatomic) SGPostalAddressComponents *components;

- (void).cxx_destruct;
- (id)initWithPlainText:(id)a0 components:(id)a1;
- (BOOL)hasExtraction;

@end
