@protocol NTKComplicationPickerListProvider;

@interface NTKComplicationPickerBaseViewConfiguration : NSObject

@property (readonly, nonatomic) id<NTKComplicationPickerListProvider> listProvider;

- (void).cxx_destruct;
- (id)initWithListProvider:(id)a0;

@end
