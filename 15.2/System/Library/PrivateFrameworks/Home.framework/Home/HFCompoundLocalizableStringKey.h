@class NSString, NSMutableArray;

@interface HFCompoundLocalizableStringKey : HFLocalizableStringKey

@property (retain, nonatomic) NSString *format;
@property (readonly, nonatomic) NSMutableArray *localizableStrings;

- (void).cxx_destruct;
- (id)localizedStringWithArgumentBlock:(id /* block */)a0;
- (id)initWithFormat:(id)a0 localizableStrings:(id)a1;

@end
