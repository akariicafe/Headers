@class NSData, NSString;

@interface VCSessionParticipantConfig : NSObject

@property (retain, nonatomic) NSData *participantData;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long idsParticipantID;
@property (nonatomic) BOOL audioEnabled;
@property (nonatomic) BOOL videoEnabled;
@property (nonatomic) BOOL frequencyMeteringEnabled;
@property (nonatomic) BOOL audioMuted;
@property (nonatomic) float volume;
@property (nonatomic) float audioPosition;
@property (nonatomic) BOOL audioPaused;
@property (nonatomic) BOOL videoPaused;
@property (nonatomic) unsigned char videoQuality;
@property (nonatomic) unsigned int visibilityIndex;
@property (nonatomic) unsigned int prominenceIndex;

- (void)dealloc;
- (id)description;

@end
