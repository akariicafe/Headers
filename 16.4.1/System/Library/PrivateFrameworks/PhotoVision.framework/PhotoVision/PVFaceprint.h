@class NSData;

@interface PVFaceprint : PVObject

@property (nonatomic) unsigned int faceprintVersion;
@property (retain, nonatomic) NSData *faceprintData;

+ (id)faceprintWithFaceprintData:(id)a0 faceprintVersion:(unsigned int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_setPropertiesFrom:(id)a0;
- (BOOL)getDistance:(float *)a0 toOtherFaceprint:(id)a1 error:(id *)a2;

@end
