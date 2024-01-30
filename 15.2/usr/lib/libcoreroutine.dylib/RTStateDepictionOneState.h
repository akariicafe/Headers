@class NSString, RTStateModelLocation, RTMapItem, NSDate, NSMutableArray;
@protocol GEOMapItem;

@interface RTStateDepictionOneState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RTStateModelLocation *location;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long typeSource;
@property (retain, nonatomic) RTMapItem *mapItem;
@property (nonatomic) unsigned long long mapItemSource;
@property (retain, nonatomic) NSDate *geocodeDate;
@property (retain, nonatomic) NSMutableArray *histEntryExit_s;
@property (retain, nonatomic) NSString *customLabel;
@property (retain, nonatomic) id<GEOMapItem> geoMapItem;

- (void)encodeWithCoder:(id)a0;
- (id)initWithLocation:(id)a0 type:(long long)a1 typeSource:(unsigned long long)a2 customLabel:(id)a3 mapItem:(id)a4;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
