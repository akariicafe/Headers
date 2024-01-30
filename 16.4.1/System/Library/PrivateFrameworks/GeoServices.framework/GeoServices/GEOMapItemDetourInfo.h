@class GEOPDResultDetourInfo, NSData;

@interface GEOMapItemDetourInfo : NSObject

@property (readonly, nonatomic, getter=_detourInfo) GEOPDResultDetourInfo *detourInfo;
@property (readonly, nonatomic) double detourTime;
@property (readonly, nonatomic) double timeToPlace;
@property (readonly, nonatomic) double detourDistance;
@property (readonly, nonatomic) double distanceToPlace;
@property (readonly, nonatomic) NSData *detourInfoAsData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithResultDetourInfo:(id)a0;

@end
