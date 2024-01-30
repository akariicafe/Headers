@class NSString;

@interface SXConditionalHints : SXJSONObject <SXConditionalHints>

@property (readonly, nonatomic) long long autoplacement;
@property (readonly, nonatomic) long long components;
@property (readonly, nonatomic) long long componentLayouts;
@property (readonly, nonatomic) long long componentStyles;
@property (readonly, nonatomic) long long componentTextStyles;
@property (readonly, nonatomic) long long documentStyle;
@property (readonly, nonatomic) long long textStyles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)autoplacementWithValue:(id)a0 withType:(int)a1;
- (long long)componentLayoutsWithValue:(id)a0 withType:(int)a1;
- (long long)componentStylesWithValue:(id)a0 withType:(int)a1;
- (long long)componentTextStylesWithValue:(id)a0 withType:(int)a1;
- (long long)componentsWithValue:(id)a0 withType:(int)a1;
- (long long)documentStyleWithValue:(id)a0 withType:(int)a1;
- (long long)ternaryValueForJSONValue:(id)a0 type:(int)a1;
- (long long)textStylesWithValue:(id)a0 withType:(int)a1;

@end
