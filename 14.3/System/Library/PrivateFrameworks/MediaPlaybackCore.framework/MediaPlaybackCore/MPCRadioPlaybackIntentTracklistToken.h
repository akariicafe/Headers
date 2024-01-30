@class MPCModelRadioContentReference, MPModelRadioStation, NSURL;

@interface MPCRadioPlaybackIntentTracklistToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL continueListeningStation;
@property (copy, nonatomic) MPCModelRadioContentReference *nowPlayingContentReference;
@property (copy, nonatomic) MPCModelRadioContentReference *seedContentReference;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (copy, nonatomic) NSURL *radioStationURL;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
