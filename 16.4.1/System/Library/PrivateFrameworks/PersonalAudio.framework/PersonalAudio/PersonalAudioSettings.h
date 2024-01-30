@class NSData, NSNumber;

@interface PersonalAudioSettings : NSManagedObject

@property (retain, nonatomic) NSData *audioSettings;
@property (retain, nonatomic) NSNumber *version;

@end
