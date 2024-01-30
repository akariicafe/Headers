@class NSString, SGPostalAddressComponents;

@interface SGPostalAddressExtraction : NSObject

@property (readonly, nonatomic) NSString *plainText;
@property (readonly, nonatomic) SGPostalAddressComponents *components;

- (void).cxx_destruct;
- (BOOL)hasExtraction;
- (id)initWithPlainText:(id)a0 components:(id)a1;

@end
