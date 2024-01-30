@class NSString;

@interface HFLiteralLocalizableStringKey : HFLocalizableStringKey

@property (readonly, nonatomic) NSString *localizedString;

- (void).cxx_destruct;
- (id)initWithLocalizedString:(id)a0;
- (id)localizedStringWithArgumentBlock:(id /* block */)a0;

@end
