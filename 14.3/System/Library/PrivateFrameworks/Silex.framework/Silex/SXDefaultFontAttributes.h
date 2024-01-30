@class NSString;

@interface SXDefaultFontAttributes : NSObject <SXTextStyleFontAttributes>

@property (readonly, nonatomic) unsigned long long weightLabel;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) long long weight;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
