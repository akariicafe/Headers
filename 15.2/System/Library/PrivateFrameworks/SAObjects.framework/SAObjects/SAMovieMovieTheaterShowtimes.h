@class NSArray, SALocalSearchBusiness2, NSString;

@interface SAMovieMovieTheaterShowtimes : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *movieShowtimes;
@property (copy, nonatomic) NSArray *showtimes;
@property (retain, nonatomic) SALocalSearchBusiness2 *theater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)movieTheaterShowtimes;
+ (id)movieTheaterShowtimesWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
