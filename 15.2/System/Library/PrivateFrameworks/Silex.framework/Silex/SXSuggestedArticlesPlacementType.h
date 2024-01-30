@class SXJSONArray, NSString;
@protocol SXAutoPlacementLayout;

@interface SXSuggestedArticlesPlacementType : SXJSONObject <SXSuggestedArticlesPlacementType>

@property (readonly, nonatomic) unsigned long long theme;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) id<SXAutoPlacementLayout> layout;
@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;
+ (Class)classForProtocolProperty:(id)a0 withValue:(id)a1;

- (unsigned long long)themeWithValue:(id)a0 withType:(int)a1;

@end
