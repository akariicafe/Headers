@class NSString, NSArray, ICRadioPlaybackHistoryItem, NSDictionary;

@interface ICRadioPlaybackHistory : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray *_tracks;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *stationIdentifier;
@property (readonly, nonatomic) long long numberOfSkips;
@property (readonly, copy, nonatomic) NSArray *tracks;
@property (readonly, copy, nonatomic) ICRadioPlaybackHistoryItem *currentTrack;
@property (readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithStationIdentifier:(id)a0;

@end
