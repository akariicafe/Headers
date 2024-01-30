@class NSString;

@interface IMLocalizedTapbackStringFormat : NSObject

@property (readonly, nonatomic) long long localizedStringFormatType;
@property (readonly, copy, nonatomic) NSString *localizedFormatString;

- (void).cxx_destruct;
- (id)initWithLocalizedStringFormatType:(long long)a0 unlocalizedFormatString:(id)a1;

@end
