@class NSString, SXJSONArray;

@interface SXListStyle : SXJSONObject

@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) NSString *character;
@property (readonly, nonatomic) SXJSONArray *indices;
@property (readonly, nonatomic) unsigned long long depth;

- (unsigned long long)styleWithValue:(id)a0 withType:(int)a1;

@end
