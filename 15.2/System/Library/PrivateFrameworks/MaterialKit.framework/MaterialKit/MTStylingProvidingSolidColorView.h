@class NSString, NSMutableDictionary;

@interface MTStylingProvidingSolidColorView : UIView <MTVisualStylingProviding>

@property (retain, nonatomic) NSMutableDictionary *stylingProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (id)visualStylingProviderForCategory:(long long)a0;
- (void).cxx_destruct;
- (id)stylingProvidingSolidColorLayer;

@end
