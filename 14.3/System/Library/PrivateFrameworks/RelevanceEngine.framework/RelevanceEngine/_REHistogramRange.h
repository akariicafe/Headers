@class NSString;

@interface _REHistogramRange : NSObject <NSCopying, REComparable>

@property (readonly, nonatomic) unsigned long long min;
@property (readonly, nonatomic) unsigned long long max;
@property (readonly, nonatomic) unsigned long long mid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithMin:(unsigned long long)a0 max:(unsigned long long)a1;
- (id)initWithValue:(unsigned long long)a0 binningSize:(unsigned long long)a1;

@end
