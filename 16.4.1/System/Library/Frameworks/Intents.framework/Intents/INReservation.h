@class NSString, NSArray, NSURL, NSDate, INSpeakableString, INDateComponentsRange;

@interface INReservation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) INDateComponentsRange *_duration;
@property (readonly, copy, nonatomic) INSpeakableString *itemReference;
@property (readonly, copy, nonatomic) NSString *reservationNumber;
@property (readonly, copy, nonatomic) NSDate *bookingTime;
@property (readonly, nonatomic) long long reservationStatus;
@property (readonly, copy, nonatomic) NSString *reservationHolderName;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, copy, nonatomic) NSURL *URL;

- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)url;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5;
- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5 URL:(id)a6;

@end
