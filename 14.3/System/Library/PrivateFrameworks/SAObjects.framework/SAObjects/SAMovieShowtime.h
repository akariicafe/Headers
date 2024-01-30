@class NSString, SAUIAppPunchOut, NSNumber, SACalendar;

@interface SAMovieShowtime : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAUIAppPunchOut *buyTicketsPunchout;
@property (copy, nonatomic) NSNumber *childTicketQuantity;
@property (nonatomic) BOOL is3d;
@property (nonatomic) BOOL isImax;
@property (copy, nonatomic) NSNumber *regularTicketQuantity;
@property (copy, nonatomic) NSNumber *seniorTicketQuantity;
@property (retain, nonatomic) SACalendar *showtime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showtime;
+ (id)showtimeWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
