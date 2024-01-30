@class PLDetectedFace, NSData;

@interface PLDetectedFaceprint : PLManagedObject

@property (retain, nonatomic) PLDetectedFace *face;
@property (nonatomic) int faceprintVersion;
@property (retain, nonatomic) NSData *data;

+ (id)entityName;

@end
