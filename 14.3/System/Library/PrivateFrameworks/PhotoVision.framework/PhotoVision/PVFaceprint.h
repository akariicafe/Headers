@class NSData;

@interface PVFaceprint : PVObject

@property (nonatomic) unsigned int faceprintVersion;
@property (retain, nonatomic) NSData *faceprintData;

+ (id)faceprintWithFaceprintData:(id)a0 faceprintVersion:(unsigned int)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)getDistance:(float *)a0 toOtherFaceprint:(id)a1 error:(id *)a2;
- (void)_setPropertiesFrom:(id)a0;

@end
