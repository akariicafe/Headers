@class NSUUID, NTKComplication;

@interface _NTKComplicationCacheKey : NSObject <NSCopying>

@property (readonly) NTKComplication *complication;
@property (readonly) long long family;
@property (readonly) NSUUID *deviceUUID;

+ (id)keyWithFamily:(long long)a0 complication:(id)a1 forDevice:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
