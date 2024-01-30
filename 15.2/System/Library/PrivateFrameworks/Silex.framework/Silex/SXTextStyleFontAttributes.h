@class NSString, NSNumber;

@interface SXTextStyleFontAttributes : SXJSONFontAttributes <SXTextStyleFontAttributes>

@property (readonly, nonatomic) unsigned long long weightLabel;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) long long weight;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) NSNumber *grade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)weightLabelWithValue:(id)a0 withType:(int)a1;

@end
