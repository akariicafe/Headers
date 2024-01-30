@class NSUUID, NTKComplication;

@interface _NTKComplicationCacheKey : NSObject <NSCopying>

@property (readonly) NTKComplication *complication;
@property (readonly) long long family;
@property (readonly) NSUUID *deviceUUID;

+ (id)keyWithFamily:(long long)a0 complication:(id)a1 forDevice:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
