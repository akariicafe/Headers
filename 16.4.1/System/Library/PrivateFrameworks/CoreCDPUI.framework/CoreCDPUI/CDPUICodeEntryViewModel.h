@class NSString, CDPRemoteValidationEscapeOffer;

@interface CDPUICodeEntryViewModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *promptTitle;
@property (copy, nonatomic) NSString *promptMessage;
@property (retain, nonatomic) CDPRemoteValidationEscapeOffer *escapeOffer;
@property (copy, nonatomic) id /* block */ codeEnteredAction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
