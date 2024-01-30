@class NSString, CDPRemoteValidationEscapeOffer, CDPEscapeOption;

@interface CDPUICustodianInstructionsViewModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *instructionHeader;
@property (copy, nonatomic) NSString *instructions;
@property (copy, nonatomic) NSString *footerText;
@property (retain, nonatomic) CDPRemoteValidationEscapeOffer *escapeOffer;
@property (retain, nonatomic) CDPEscapeOption *continueOption;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
