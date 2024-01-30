@class NSMutableDictionary, NSDictionary, NSDate, NSNumber;

@interface ICRadioPlaybackHistoryItem : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDictionary *_serverTrackInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, copy, nonatomic) NSNumber *pauseTime;
@property (readonly, copy, nonatomic) NSDictionary *serverTrackInfo;
@property (readonly, copy, nonatomic) NSDate *skipDate;
@property (readonly, nonatomic) long long storeIdentifier;
@property (readonly, copy, nonatomic) NSMutableDictionary *propertyListRepresentation;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTrack:(id)a0;
- (unsigned long long)hash;

@end
