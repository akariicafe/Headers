@class HDProfile;

@interface ACHRemoteTemplateAvailabilityKeyProvider : NSObject

@property (readonly, weak, nonatomic) HDProfile *profile;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (BOOL)markTemplateAvailable:(id)a0 error:(id *)a1;
- (BOOL)templateAvailableOnPairedDevice:(id)a0 error:(id *)a1;
- (id)availabilityStateKeyFromUniqueName:(id)a0 creatorDevice:(unsigned char)a1;

@end
