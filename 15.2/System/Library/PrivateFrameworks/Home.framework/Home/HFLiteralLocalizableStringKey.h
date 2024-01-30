@class NSString;

@interface HFLiteralLocalizableStringKey : HFLocalizableStringKey

@property (readonly, nonatomic) NSString *localizedString;

- (void).cxx_destruct;
- (id)localizedStringWithArgumentBlock:(id /* block */)a0;
- (id)initWithLocalizedString:(id)a0;

@end
