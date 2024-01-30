@class NSString, CDPRemoteValidationEscapeOffer;

@interface CDPUICodeEntryViewModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *promptTitle;
@property (copy, nonatomic) NSString *promptMessage;
@property (retain, nonatomic) CDPRemoteValidationEscapeOffer *escapeOffer;
@property (copy, nonatomic) id /* block */ codeEnteredAction;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
