@class NSUUID, NSString, MNTimepoint, _MNTimepointAndTransportType, NSDate, GEOComposedWaypoint;

@interface MNPlannedDestination : NSObject <MNJSONOutput, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _MNTimepointAndTransportType *_internalTimepoint;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) GEOComposedWaypoint *destinationWaypoint;
@property (nonatomic) int transportType;
@property (copy, nonatomic) MNTimepoint *timepoint;
@property (copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)destinationFromArchiveData:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTransportType:(int)a0;
- (int)transportType;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (void)setTimepoint:(id)a0;
- (id)timepoint;
- (BOOL)isEqual:(id)a0;
- (id)archiveData;
- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isDuplicateOf:(id)a0;
- (void)_setTimepoint:(id)a0 transportType:(int)a1;
- (id)initWithWaypoint:(id)a0 transportType:(int)a1;

@end
