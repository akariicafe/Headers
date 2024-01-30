@class NSString;

@interface NTPBUserOnboardingScreenView : PBCodable <NSCopying> {
    struct { unsigned char channelPickerPresentationReason : 1; unsigned char countOfNotificationsSelected : 1; unsigned char onboardingScreenType : 1; unsigned char previouslyCompletedOnboardingOsVersion : 1; unsigned char userAction : 1; unsigned char fromPersonalizeNews : 1; } _has;
}

@property (nonatomic) BOOL hasOnboardingScreenType;
@property (nonatomic) int onboardingScreenType;
@property (readonly, nonatomic) BOOL hasReferringSourceApplication;
@property (retain, nonatomic) NSString *referringSourceApplication;
@property (readonly, nonatomic) BOOL hasReferringUrl;
@property (retain, nonatomic) NSString *referringUrl;
@property (readonly, nonatomic) BOOL hasUserActivityType;
@property (retain, nonatomic) NSString *userActivityType;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) BOOL hasCountOfNotificationsSelected;
@property (nonatomic) int countOfNotificationsSelected;
@property (nonatomic) BOOL hasPreviouslyCompletedOnboardingOsVersion;
@property (nonatomic) int previouslyCompletedOnboardingOsVersion;
@property (nonatomic) BOOL hasFromPersonalizeNews;
@property (nonatomic) BOOL fromPersonalizeNews;
@property (nonatomic) BOOL hasChannelPickerPresentationReason;
@property (nonatomic) int channelPickerPresentationReason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsChannelPickerPresentationReason:(id)a0;
- (id)channelPickerPresentationReasonAsString:(int)a0;

@end
