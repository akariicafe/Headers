@class NSString, SACalendar;

@interface SAMPPlaybackInfo : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long durationMillis;
@property (retain, nonatomic) SACalendar *lastPlayedDate;
@property (nonatomic) long long playbackPositionMillis;
@property (nonatomic) long long plays;
@property (nonatomic) BOOL rememberPlaybackPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playbackInfo;
+ (id)playbackInfoWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
