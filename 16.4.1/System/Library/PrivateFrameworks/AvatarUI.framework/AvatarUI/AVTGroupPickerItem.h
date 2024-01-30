@class NSString;

@interface AVTGroupPickerItem : NSObject

@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) id /* block */ symbolNameProvider;

- (void).cxx_destruct;
- (id)initWithLocalizedName:(id)a0 symbolNameProvider:(id /* block */)a1;

@end
