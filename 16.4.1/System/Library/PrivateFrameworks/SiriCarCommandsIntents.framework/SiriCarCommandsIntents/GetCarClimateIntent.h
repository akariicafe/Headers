@class INSpeakableString, NSNumber;

@interface GetCarClimateIntent : INIntent

@property (nonatomic, retain) INSpeakableString *carName;
@property (nonatomic, retain) NSNumber *isGetCarActivationStatusRequest;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
