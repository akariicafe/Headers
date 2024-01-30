@class NSString, NSUUID, NTKComplication;

@interface _NTKSlotComplicationKey : NSObject <NSCopying>

@property (readonly) NTKComplication *complication;
@property (readonly, copy) NSString *slot;
@property (readonly) NSUUID *deviceUUID;

+ (id)keyWithSlot:(id)a0 complication:(id)a1 forDevice:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
