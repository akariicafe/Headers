@class NSString, NSMutableDictionary, HMIFaceTracker;

@interface HMISessionEntityManager : HMFObject <HMFLogging> {
    HMIFaceTracker *_faceTracker;
    NSMutableDictionary *_sessionUUIDToPreviousFaceIndex;
    NSMutableDictionary *_sessionUUIDToPreviousFaceprints;
}

@property (readonly) NSMutableDictionary *sessionEntities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
