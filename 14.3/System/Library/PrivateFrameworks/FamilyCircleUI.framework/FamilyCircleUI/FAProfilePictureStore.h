@class NSMutableDictionary, NSDictionary, NSObject, FAFamilyCircle;
@protocol OS_dispatch_queue;

@interface FAProfilePictureStore : NSObject {
    FAFamilyCircle *_familyCircle;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_profileImages;
}

@property (readonly, copy, nonatomic) NSDictionary *profileImages;
@property (retain, nonatomic) FAFamilyCircle *familyCircle;

+ (double)screenScale;
+ (id)profilePictureForContact:(id)a0 serverImageData:(id)a1 firstName:(id)a2 lastName:(id)a3 diameter:(double)a4;
+ (id)_dataForImage:(id)a0;

- (void).cxx_destruct;
- (id)initWithFamilyCircle:(id)a0;
- (void)dealloc;
- (id)profilePictureForFamilyMember:(id)a0;
- (void)_traitCollectionDidChange:(id)a0;
- (id)profilePicturesWithDiameter:(double)a0;
- (void)fetchProfileImagesWithCompletion:(id /* block */)a0;
- (id)profilePictureForFamilyMember:(id)a0 pictureDiameter:(double)a1;
- (id)profilePictureForFamilyMemberWithAltDSID:(id)a0 pictureDiameter:(double)a1;
- (void)_postReloadNotification;
- (id)resizedPictureWithData:(id)a0 diameter:(double)a1;

@end
