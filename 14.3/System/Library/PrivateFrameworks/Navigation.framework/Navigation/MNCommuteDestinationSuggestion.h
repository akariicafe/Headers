@class NSString, NSData, NSDate, GEOComposedWaypoint;

@interface MNCommuteDestinationSuggestion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *rawSuggestion;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) GEOComposedWaypoint *waypoint;
@property (nonatomic) double weight;
@property (copy, nonatomic) NSDate *expires;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic, getter=isAllDay) BOOL allDay;

+ (void)_setupFakes;
+ (id)_fakeBitsAndPiecesForSuggestion:(id)a0;
+ (id)fakeDestinationSuggestion:(id)a0;
+ (void)fakeDestinationSuggestion:(id)a0 completionHandler:(id /* block */)a1;
+ (id)fakeDestinationSuggestions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
