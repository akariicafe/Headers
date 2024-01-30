@class NSString;

@interface SXDataTableSortReference : SXJSONObject

@property (readonly, nonatomic) NSString *descriptor;
@property (readonly, nonatomic) unsigned long long direction;

- (unsigned long long)directionWithValue:(id)a0 withType:(int)a1;

@end
