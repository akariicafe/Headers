@interface OADCachedDrawableStyle : NSObject

@property (readonly, nonatomic) int fillCategory;
@property (readonly, nonatomic) unsigned long long fillIndex;
@property (readonly, nonatomic) unsigned long long strokeIndex;
@property (readonly, nonatomic) unsigned long long shadowIndex;
@property (readonly, nonatomic) unsigned char reflectionOpacity;
@property (readonly, nonatomic) unsigned long long textStyleIndex;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFillCategory:(int)a0 mFillIndex:(unsigned long long)a1 strokeIndex:(unsigned long long)a2 shadowIndex:(unsigned long long)a3 reflectionOpacity:(unsigned char)a4 textStyleIndex:(unsigned long long)a5;

@end
