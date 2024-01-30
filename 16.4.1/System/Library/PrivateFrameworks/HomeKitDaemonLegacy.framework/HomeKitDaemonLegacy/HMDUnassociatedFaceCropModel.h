@class NSUUID, NSData, NSDate;

@interface HMDUnassociatedFaceCropModel : HMBModel

@property (class, readonly, copy) NSUUID *sentinelParentUUID;

@property (retain) NSData *faceBoundingBoxData;
@property (retain) NSData *dataRepresentation;
@property (retain) NSDate *dateCreated;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } faceBoundingBox;

+ (id)hmbProperties;
+ (id)hmbExternalRecordType;
+ (id)hmbQueries;
+ (id)unassociatedFaceCropsBetweenDatesQueryWithIsAscending:(BOOL)a0;

- (id)createFaceCrop;
- (id)initWithFaceCrop:(id)a0;

@end
